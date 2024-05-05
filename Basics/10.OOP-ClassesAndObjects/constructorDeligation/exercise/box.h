#ifndef EXERCISE_H
#define EXERCISE_H

class Box {
	public : 
	//methods
	Box() = default;
	Box(double width, double length)
	    : Box(width, length, 1.0)
	{
	    
	}
	Box(double width, double length, double height)
	    : m_width{width}, m_length{length}, m_height{height}
	{
	    
	}
	
	double base_area() const{
		return m_width * m_length;
	}
	double volume() const{
		return base_area() * m_height;
	}

	//member variables
	private : 
	double m_width{1};
	double m_length{1};
	double m_height{1};
};

#endif // _EXERCISE_H
