///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/button.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/panel.h>
#include <wx/textctrl.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
	private:

	protected:
		wxButton* m_start_button;
		wxButton* m_stop_button;
		wxButton* m_settings_button;
		wxButton* m_restart_button;

		wxStaticText* m_radious_text_for_slider;
		wxSlider* m_radious_slider;
		wxStaticText* m_charge_text_for_slider;
		wxSlider* m_charge_slider;

		wxPanel* m_view_ball_panel;

		wxStaticText* m_dielectric_const_text;
		wxTextCtrl* m_dielectric_value_text;
		wxStaticText* m_dielectric_unit;
		wxStaticText* m_density_const_text;
		wxTextCtrl* m_density_value_text;
		wxStaticText* m_denity_unit;
		wxStaticText* m_delta_t_text;
		wxTextCtrl* m_delta_t_value_text;
		wxStaticText* m_staticText8;

		wxPanel* m_simulation_panel;

		// Virtual event handlers, overide them in your derived class
		virtual void m_start_button_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_stop_button_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_settings_button_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_restart_button_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_new_dielectric_value_entered( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_new_density_value_entered( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_new_delta_t_value_entered( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_simulation_panel_left_click( wxMouseEvent& event ) { event.Skip(); }


	public:

		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame1();

};

