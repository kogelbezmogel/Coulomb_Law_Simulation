#include "GUIMyFrame1.h"
#include "Collision_Detection.h"
#include "Vector.h"

GUIMyFrame1::GUIMyFrame1( wxWindow* parent )
:
MyFrame1( parent ),
m_timer(this)
{
	//pobranie wartosci stalych
	double dt_value = std::stod(static_cast<std::string>(m_delta_t_value_text->GetValue()));
	double de_value = std::stod( static_cast<std::string>(m_density_value_text->GetValue()) );
	double di_value = std::stod( static_cast<std::string>(m_dielectric_value_text->GetValue()) );
	m_density = di_value;
	m_dielectric = de_value * pow(10, -12);
	m_delta_t = dt_value * pow(10, -2);
}

void GUIMyFrame1::m_start_button_click( wxCommandEvent& event )
{
	m_simulation_flag = 1;

	m_timer.start(20);
	//draw_simulation_frame();
}

void GUIMyFrame1::m_stop_button_click( wxCommandEvent& event )
{
	m_simulation_flag = 0;
	m_timer.Stop();
}

void GUIMyFrame1::m_settings_button_click( wxCommandEvent& event )
{
	draw_chrge_preview();
}

void GUIMyFrame1::m_restart_button_click( wxCommandEvent& event )
{
m_simulation_flag = 0;

std::list< std::shared_ptr<ChargedBall> >::iterator iter = m_balls_list.begin();
	for (int i = 0; i < m_balls_list.size(); ++i, ++iter) {
		(*iter) -> setPlace( m_start_points[i] );
		(*iter) -> setVelocity( m_start_velocity[i] );
	}
	draw_simulation_frame();
}

void GUIMyFrame1::m_new_dielectric_value_entered( wxCommandEvent& event )
{
double di_value = std::stod(static_cast<std::string>(m_dielectric_value_text->GetValue()));
m_dielectric = di_value;
}

void GUIMyFrame1::m_new_density_value_entered( wxCommandEvent& event )
{
double de_value = std::stod(static_cast<std::string>(m_density_value_text->GetValue()));
m_density = de_value;
}

void GUIMyFrame1::m_new_delta_t_value_entered( wxCommandEvent& event )
{
	double dt_value = std::stod(static_cast<std::string>(m_delta_t_value_text->GetValue()));
	m_delta_t = dt_value;
}

void GUIMyFrame1::m_simulation_panel_left_click( wxMouseEvent& event )
{

	Vector<2> place{ static_cast<double>(event.GetPosition().x), static_cast<double>(event.GetPosition().y) };
int charge = m_charge_slider->GetValue() / 100.0;
int radious = m_radious_slider->GetValue() / 100.0 * 57 + 6;;
int weight = m_density * 4.0 / 3.0 * M_PI * pow(radious, 3);

std::shared_ptr<ChargedBall> sh_ptr( new ChargedBall(weight, radious, charge, place));
m_balls_list.push_back(sh_ptr);

m_start_points.push_back( Vector<2>{place[0], place[1]} );
m_start_velocity.push_back(Vector<2>());

wxClientDC dc(m_simulation_panel);
dc.DrawCircle(place[0], place[1], radious);
}

void GUIMyFrame1::draw_chrge_preview() {

	std::shared_ptr<wxClientDC> dc(new wxClientDC( m_view_ball_panel ));

	int w_height = m_view_ball_panel->GetSize().GetHeight();
	int w_length = m_view_ball_panel->GetSize().GetWidth();
	int zero = 30;

	dc->Clear();

	dc->DrawLine(zero, w_height - zero, zero, 20);
	dc->DrawLine(zero, w_height - zero, w_length - zero, w_height - zero);

	for (int i = 0; i * 14 < 150; ++i) { //drawing sclae
		if (i % 2) {
			dc->DrawLine(zero + i * 14, w_height - zero - 1, zero + i * 14, w_height - zero + 1);
			dc->DrawLine(29, w_height - zero - i * 14, 31, w_height - zero - i * 14);
		}
		else {
			dc->DrawLine(zero + i * 14, w_height - zero - 3, zero + i * 14, w_height - zero + 3);
			dc->DrawLine(27, w_height - zero - i * 14, 33, w_height - zero - i * 14);
		}
	}

	int radoius = m_radious_slider->GetValue() / 100.0 * 57 + 6;

	dc->DrawCircle(w_length / 2, w_height / 2, radoius);
}

void GUIMyFrame1::draw_simulation_frame(){

	std::shared_ptr<wxClientDC> dc(new wxClientDC(m_simulation_panel));

	dc->Clear();

	for (auto i : m_balls_list) {
		dc->DrawCircle(i->getPlace()[0], i->getPlace()[1], i->getRadious());
	}

	simulate_changes();
}


void GUIMyFrame1::Refresh(bool eraseBack, const wxRect* rubbish) {


	//m_simulation_panel->ClearBackground();
	draw_simulation_frame();

}

void GUIMyFrame1::simulate_changes() {
	
	Vector<2> Force;
	Vector<2> acceleration;
	Vector<2> r_n_vec;
	Vector<2> place_after_dt;
	Vector<2> velocity_delta;
	Vector<2> velocity;
	double r;
	double const_kQ;

	for (auto i : m_balls_list) {
		Force = { 0, 0 };
		const_kQ = (-1.0) / (4 * M_PI * m_dielectric) * i->getCharge();

		for (auto j : m_balls_list)
			if (i != j) {

				r_n_vec = (j->getPlace() - i->getPlace()) / 3800.0;
				r = r_n_vec.norm();
				r_n_vec = r_n_vec.normalised();

				Force += r_n_vec * const_kQ * j->getCharge() / (r*r);
				
			}

		acceleration = Force / i->getWeight();

		velocity_delta = acceleration * m_delta_t;

		velocity = i->getVelocity();
		velocity += velocity_delta;
		i->setVelocity(velocity);

		place_after_dt = i->getPlace();
		place_after_dt += velocity * m_delta_t;

		i->setPlace(place_after_dt);
	}
	Collision_Detection(0, m_simulation_panel->GetSize().GetWidth(), 0, m_simulation_panel->GetSize().GetHeight(), m_balls_list);
}