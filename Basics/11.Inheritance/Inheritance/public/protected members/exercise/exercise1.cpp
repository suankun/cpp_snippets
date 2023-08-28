#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>

class A{
	public :  // changed from protected to public in order to have access from inline void apply_changes( B& b)
	 int m_x;
};

class B : public A{
	public : 
		int m_y;
		void set_values(int x, int y, int z){
			m_x = x;
			m_y = y;
			m_z = z;
		}
		void print() const{
			std::cout << "x : " << m_x << ",y : " << m_y
				<< ",z : " << m_z;
		}
	private : 
		int m_z;
};

inline void apply_changes( B& b){
	b.m_x *=2;
}



#endif // _EXERCISE_H
