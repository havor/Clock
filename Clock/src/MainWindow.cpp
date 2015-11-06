/*
 * MainWindow.cpp
 *
 *  Created on: Nov 5, 2015
 *      Author: tanhh
 */

#include "MainWindow.h"

MainWindow::MainWindow() {
	// TODO Auto-generated constructor stub
	set_default_size(200,200);
	add(m_ClockDrawArea);
	show_all_children();

}

MainWindow::~MainWindow() {
	// TODO Auto-generated destructor stub
}

