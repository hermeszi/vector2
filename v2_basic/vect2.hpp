#ifndef VECT2_HPP
#define VECT2_HPP

#include <iostream>

class vect2
{
	int x;
	int y;
public:
	explicit vect2(int x = 0, int y = 0);
	vect2 (const vect2 & other);
	
	~vect2() {};
	
	vect2 & operator=(const vect2 & rhs);
	int & operator[](const int index);
	int operator[](const int index) const;
	
	vect2 operator+(const int num);
	vect2 operator-(const int num);
	vect2 operator*(const int num);

	vect2 operator+(const vect2 & rhs);
	vect2 operator-(const vect2 & rhs);
	vect2 operator*(const vect2 & rhs);
	
	bool operator==(const vect2 & rhs);
	
	friend std::ostream & operator<<(std::ostream & out, const vect2 & v);

};

#endif

