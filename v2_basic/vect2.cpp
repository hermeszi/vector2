
#include "vect2.hpp"


vect2::vect2(int x, int y)
{
	this->x = x;
	this->y = y;
}

vect2::vect2 (const vect2 & other)
{
	operator=(other);
}
	

vect2 & vect2::operator=(const vect2 & rhs)
{
	if (this != &rhs)
	{
		this->x = rhs.x;
		this->y = rhs.y;
	}
	return *this;
}

int & vect2::operator[](const int index)
{
	if (index == 0)
		return x;
	//else if (index == 1)
	return y;
	// hmm what to return if else
}

int vect2::operator[](const int index) const
{
	if (index == 0)
		return x;
	else if (index == 1)
		return y;
	else
		return 0;
}
	
vect2 vect2::operator+(const int num)
{
	return vect2(x + num, y + num);
}

vect2 vect2::operator-(const int num)
{
	return vect2(x - num, y - num);
}

vect2 vect2::operator*(const int num)
{
	return vect2(x * num, y * num);
}

vect2 vect2::operator+(const vect2 & rhs)
{
	return vect2(x + rhs.x, y + rhs.y);
}

vect2 vect2::operator-(const vect2 & rhs)
{
	return vect2(x - rhs.x, y - rhs.y);
}

vect2 vect2::operator*(const vect2 & rhs)
{
	return vect2(x * rhs.x, y * rhs.y);
}
	
bool vect2::operator==(const vect2 & rhs)
{
	return (x == rhs.x && y == rhs.y);
}

std::ostream & operator<<(std::ostream & out, const vect2 & v)
{
	out << "{"<< v.x << ", " << v.y << "}";
	return out;
}
