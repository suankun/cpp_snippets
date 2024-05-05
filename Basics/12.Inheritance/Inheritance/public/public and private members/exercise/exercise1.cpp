#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>

class A{
	private :
	 int m_x;
	public:
	    void set_m_x(int x) {
	        m_x = x;
	    }
	    int get_m_x() const {
	        return m_x;
	    }
};

class B : public A{
	public : 
		int m_y;
		void set_values(int x, int y, int z){
			set_m_x(x);
			m_y = y;
			m_z = z;
		}
		void print() const{
			std::cout << "x : " << get_m_x() << ",y : " << m_y
				<< ",z : " << m_z ;
		}
	private : 
		int m_z;
};


#endif // _EXERCISE_H
