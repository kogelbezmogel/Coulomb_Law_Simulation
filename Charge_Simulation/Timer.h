#pragma once

#include <wx/timer.h>
#include <wx/panel.h>

class MyTimer : public wxTimer {

public:
	MyTimer(wxFrame* animation_frame);
	void Notify() override;
	void start( int milisec );
	void stop();

	wxFrame* m_animation_frame;
};