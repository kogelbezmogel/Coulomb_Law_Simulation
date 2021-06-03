///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	bSizer3->SetMinSize( wxSize( 200,20 ) );
	m_start_button = new wxButton( this, wxID_ANY, wxT("START"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_start_button, 1, 0, 5 );

	m_stop_button = new wxButton( this, wxID_ANY, wxT("STOP"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_stop_button, 1, 0, 5 );


	bSizer2->Add( bSizer3, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_settings_button = new wxButton( this, wxID_ANY, wxT("Settings"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_settings_button, 1, 0, 5 );

	m_restart_button = new wxButton( this, wxID_ANY, wxT("RESTART"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_restart_button, 1, 0, 5 );


	bSizer2->Add( bSizer4, 0, wxEXPAND, 5 );

	m_radious_text_for_slider = new wxStaticText( this, wxID_ANY, wxT("radious"), wxPoint( -1,-1 ), wxDefaultSize, 0 );
	m_radious_text_for_slider->Wrap( -1 );
	bSizer2->Add( m_radious_text_for_slider, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	m_radious_slider = new wxSlider( this, wxID_ANY, 10, 1, 100, wxDefaultPosition, wxSize( 200,-1 ), wxSL_HORIZONTAL );
	bSizer2->Add( m_radious_slider, 0, wxALL, 5 );

	m_charge_text_for_slider = new wxStaticText( this, wxID_ANY, wxT("charge"), wxDefaultPosition, wxDefaultSize, 0 );
	m_charge_text_for_slider->Wrap( -1 );
	bSizer2->Add( m_charge_text_for_slider, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	m_charge_slider = new wxSlider( this, wxID_ANY, 0, -100, 100, wxDefaultPosition, wxSize( 200,-1 ), wxSL_HORIZONTAL );
	bSizer2->Add( m_charge_slider, 0, wxALL, 5 );

	m_view_ball_panel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 200,200 ), wxTAB_TRAVERSAL );
	m_view_ball_panel->SetBackgroundColour( wxColour( 184, 197, 199 ) );
	m_view_ball_panel->SetMinSize( wxSize( 200,200 ) );
	m_view_ball_panel->SetMaxSize( wxSize( 200,200 ) );

	bSizer2->Add( m_view_ball_panel, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_dielectric_const_text = new wxStaticText( this, wxID_ANY, wxT("e  = "), wxDefaultPosition, wxDefaultSize, 0 );
	m_dielectric_const_text->SetLabelMarkup( wxT("e  = ") );
	m_dielectric_const_text->Wrap( -1 );
	m_dielectric_const_text->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer8->Add( m_dielectric_const_text, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_dielectric_value_text = new wxTextCtrl( this, wxID_ANY, wxT("8.854187817"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_dielectric_value_text, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_dielectric_unit = new wxStaticText( this, wxID_ANY, wxT("  [F/m e-12]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_dielectric_unit->Wrap( -1 );
	bSizer8->Add( m_dielectric_unit, 0, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer7->Add( bSizer8, 0, wxALL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_density_const_text = new wxStaticText( this, wxID_ANY, wxT("q  = "), wxDefaultPosition, wxDefaultSize, 0 );
	m_density_const_text->Wrap( -1 );
	bSizer9->Add( m_density_const_text, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_density_value_text = new wxTextCtrl( this, wxID_ANY, wxT("7874"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_density_value_text, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_denity_unit = new wxStaticText( this, wxID_ANY, wxT("[kg / m^3]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_denity_unit->Wrap( -1 );
	bSizer9->Add( m_denity_unit, 0, wxALL, 5 );


	bSizer7->Add( bSizer9, 0, wxALL, 5 );

	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxHORIZONTAL );

	m_delta_t_text = new wxStaticText( this, wxID_ANY, wxT("dt = "), wxDefaultPosition, wxDefaultSize, 0 );
	m_delta_t_text->Wrap( -1 );
	bSizer81->Add( m_delta_t_text, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_delta_t_value_text = new wxTextCtrl( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer81->Add( m_delta_t_value_text, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT(" [ s  e-2]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer81->Add( m_staticText8, 0, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer7->Add( bSizer81, 0, wxALL, 5 );


	bSizer2->Add( bSizer7, 1, wxEXPAND, 5 );


	bSizer1->Add( bSizer2, 0, wxEXPAND, 5 );

	m_simulation_panel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 600,600 ), wxTAB_TRAVERSAL );
	m_simulation_panel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );

	bSizer1->Add( m_simulation_panel, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_start_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_start_button_click ), NULL, this );
	m_stop_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_stop_button_click ), NULL, this );
	m_settings_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_settings_button_click ), NULL, this );
	m_restart_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_restart_button_click ), NULL, this );
	m_dielectric_value_text->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_new_dielectric_value_entered ), NULL, this );
	m_density_value_text->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_new_density_value_entered ), NULL, this );
	m_delta_t_value_text->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_new_delta_t_value_entered ), NULL, this );
	m_simulation_panel->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( MyFrame1::m_simulation_panel_left_click ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	m_start_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_start_button_click ), NULL, this );
	m_stop_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_stop_button_click ), NULL, this );
	m_settings_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_settings_button_click ), NULL, this );
	m_restart_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_restart_button_click ), NULL, this );
	m_dielectric_value_text->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_new_dielectric_value_entered ), NULL, this );
	m_density_value_text->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_new_density_value_entered ), NULL, this );
	m_delta_t_value_text->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_new_delta_t_value_entered ), NULL, this );
	m_simulation_panel->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( MyFrame1::m_simulation_panel_left_click ), NULL, this );

}
