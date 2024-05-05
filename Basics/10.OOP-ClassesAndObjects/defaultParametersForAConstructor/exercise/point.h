#ifndef POINT_H
#define POINT_H

#include <iostream>

struct Point{
	public : 
	//methods
	//Point() = default;
	Point(double x = 10.1, double y = 100.1);

	void set_x(double x){
		m_x = x;
	}

	void set_y(double y){
		m_y = y;
	}

	double x()  {
		return m_x;
	}
	double y()  {
		return m_y;
	}
	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};

#endif // POINT_H
