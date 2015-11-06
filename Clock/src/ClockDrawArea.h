/*
 * ClockDrawArea.h
 *
 *  Created on: Nov 5, 2015
 *      Author: tanhh
 */

#ifndef CLOCKDRAWAREA_H_
#define CLOCKDRAWAREA_H_
#include <gtkmm.h>

class ClockDrawArea : public Gtk::DrawingArea{
public:
	ClockDrawArea();
	virtual ~ClockDrawArea();
protected:
	double m_LineWidth;
	double m_Radius;
	virtual bool on_draw(const Cairo::RefPtr<Cairo::Context>& context);
	bool on_time_out();
};

#endif /* CLOCKDRAWAREA_H_ */
