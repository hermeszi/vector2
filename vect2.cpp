
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
	
vect2 & vect2::operator+=(const int num)
{
	x += num;
	y += num;
	return *this;
}

vect2 & vect2::operator-=(const int num)
{
	x -= num;
	y -= num;
	return *this;
}

vect2 & vect2::operator*=(const int num)
{
	x *= num;
	y *= num;
	return *this;
}

vect2 & vect2::operator+=(const vect2 & rhs)
{
	x += rhs.x;
	y += rhs.y;
	return *this;	
}

vect2 & vect2::operator-=(const vect2 & rhs)
{
	x -= rhs.x;
	y -= rhs.y;
	return *this;	
}

vect2 & vect2::operator*=(const vect2 & rhs)
{
	x *= rhs.x;
	y *= rhs.y;
	return *this;	
}

vect2 & vect2::operator--()
{
	--(this->x);
	--this->y;
	return *this;
}

const vect2 vect2::operator--(int)
{
	vect2 temp(x,y);
	(--x);
	(--y);
	return temp;
}

vect2 & vect2::operator++()
{
	(++x);
	(++y);
	return *this;
}

const vect2 vect2::operator++(int)
{
	vect2 temp(x,y);
	(++x);
	(++y);
	return temp;
}

std::ostream & operator<<(std::ostream & out, const vect2 & v)
{
	out << "{"<< v.getX() << ", " << v.getY() << "}";
	return out;
}
