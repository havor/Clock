/*
 ============================================================================
 Name        : Clock.cpp
 Author      : Tanhh
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Draw a clock in C++, with Gtkmm.
 ============================================================================
 */
#include "MainWindow.h"

int main(int argc, char* argv[]){
	auto app = Gtk::Application::create(argc,argv,"learngtkmm.hh.org");
	MainWindow window;
	return app->run(window);

}
