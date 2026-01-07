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
	
	vect2 operator+(const int num) const {return vect2(x + num, y + num);};
	vect2 operator-(const int num) const {return vect2(x - num, y - num);};
	vect2 operator*(const int num) const {return vect2(x * num, y * num);};

	vect2 operator+(const vect2 & rhs) const {return vect2(x + rhs.x, y + rhs.y);};
	vect2 operator-(const vect2 & rhs) const {return vect2(x - rhs.x, y - rhs.y);};
	vect2 operator*(const vect2 & rhs) const {return vect2(x * rhs.x, y * rhs.y);};
	
	bool operator==(const vect2 & rhs) const {return (x == rhs.x && y == rhs.y);};
	bool operator!=(const vect2 & rhs) const {return !(operator==(rhs));};

	vect2 operator-() const {return vect2(-x, -y);};

	vect2 & operator--();
	const vect2 operator--(int);

	vect2 & operator++();
	const vect2 operator++(int);

	vect2 & operator+=(const int num);
	vect2 & operator-=(const int num);
	vect2 & operator*=(const int num);

	vect2 & operator+=(const vect2 & rhs);
	vect2 & operator-=(const vect2 & rhs);
	vect2 & operator*=(const vect2 & rhs);

	
	int getX() const {return x;}
	int getY() const {return y;}
	
	friend vect2 operator+(const int num, const vect2 & rhs) {return vect2(num + rhs.x, num + rhs.y);};
	friend vect2 operator-(const int num, const vect2 & rhs) {return vect2(num - rhs.x, num - rhs.y);};
	friend vect2 operator*(const int num, const vect2 & rhs) {return vect2(num * rhs.x, num * rhs.y);};
	
};

std::ostream & operator<<(std::ostream & out, const vect2 & v);

#endif

