#include "GUIMyFrame1.h"

GUIMyFrame1::GUIMyFrame1( wxWindow* parent )
:
MyFrame1( parent )
{	//pobranie wartosci stalych 
	double de_value = std::stod( static_cast<std::string>(m_density_value_text->GetValue()) );
	double di_value = std::stod( static_cast<std::string>(m_dielectric_value_text->GetValue()) );
	m_density = di_value;
	m_dielectric = de_value * pow(10, -12);
}

void GUIMyFrame1::m_start_button_click( wxCommandEvent& event )
{
	m_simulation_flag = 0;
}

void GUIMyFrame1::m_stop_button_click( wxCommandEvent& event )
{
	m_simulation_flag = 0;
}

void GUIMyFrame1::m_settings_button_click( wxCommandEvent& event )
{
	//to jak se teraz mysle to jest do wyrzucenia ale no se zobaczymy
}

void GUIMyFrame1::m_restart_button_click( wxCommandEvent& event )
{
	m_simulation_flag = 0;

	std::list< std::shared_ptr<ChargedBall> >::iterator iter = m_balls_list.begin();
	for (int i = 0; i < m_balls_list.size(); ++i, ++iter) {
		(*iter) -> setPlace( m_start_points[i] );
	}
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

void GUIMyFrame1::m_simulation_panel_left_click( wxMouseEvent& event )
{

wxPoint place = event.GetPosition();
int charge = m_charge_slider->GetValue() / 10.0;
int radious = m_radious_slider->GetValue() / 10.0;
int weight = m_density * 4.0 / 3.0 * M_PI * pow(radious, 3);

std::shared_ptr<ChargedBall> sh_ptr( new ChargedBall(weight, radious, charge, place));

m_balls_list.push_back(sh_ptr);
}
