#ifndef __GUIMyFrame1__
#define __GUIMyFrame1__

/**
@file
Subclass of MyFrame1, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include

#include <memory>
#include <list>
#include <vector>
#include <wx/dcclient.h>
#include "ChargedBall.h"
#include "Timer.h"

/** Implementing MyFrame1 */
class GUIMyFrame1 : public MyFrame1
{
	protected:
		// Handlers for MyFrame1 events.
		void m_start_button_click( wxCommandEvent& event );
		void m_stop_button_click( wxCommandEvent& event );
		void m_settings_button_click( wxCommandEvent& event );
		void m_restart_button_click( wxCommandEvent& event );
		void m_new_dielectric_value_entered( wxCommandEvent& event );
		void m_new_density_value_entered( wxCommandEvent& event );
		void m_new_delta_t_value_entered( wxCommandEvent& event );
		void m_simulation_panel_left_click( wxMouseEvent& event );
	public:
		/** Constructor */
		GUIMyFrame1( wxWindow* parent );
	//// end generated class members

	protected:

		void draw_chrge_preview();
		void simulate_changes();
		void Refresh(bool eraseBack = true, const wxRect* = NULL) override;

		std::list< std::shared_ptr<ChargedBall> > m_balls_list;
		std::vector< Vector<2> > m_start_points;
		std::vector< Vector<2> > m_start_velocity;
		double m_density;
		double m_dielectric;
		double m_delta_t;

		MyTimer m_timer;

	public:
		void draw_simulation_frame();
		bool m_simulation_flag{ 0 };







};

#endif // __GUIMyFrame1__
