#include "Timer.h"
#include "GUIMyFrame1.h"

MyTimer::MyTimer(wxFrame* animation_frame) : wxTimer(), m_animation_frame(animation_frame) { }

void MyTimer::Notify() {
	m_animation_frame->Refresh();
}

void MyTimer::start(int milisec) {
	wxTimer::Start(20);
}

void MyTimer::stop() {
	wxTimer::Stop();
}