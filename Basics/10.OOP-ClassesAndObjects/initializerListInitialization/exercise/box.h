#ifndef BOX_H
#define BOX_H

class Box {
	public : 
	//constructor
	Box(double width, double length, double height);
	
	//methods
	Box() = default;

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

#endif // _BOX_H
