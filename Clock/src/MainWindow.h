/*
 * MainWindow.h
 *
 *  Created on: Nov 5, 2015
 *      Author: tanhh
 */

#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_
#include <gtkmm.h>
#include "ClockDrawArea.h"

class MainWindow : public Gtk::Window{
public:
	MainWindow();
	virtual ~MainWindow();
protected:
	ClockDrawArea m_ClockDrawArea;
};

#endif /* MAINWINDOW_H_ */
