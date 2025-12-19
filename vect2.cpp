#include <stdexcept>
#include "vect2.hpp"


//constructor
vect2::vect2(int x, int y) : x(x), y(y) {}

//copy constructor
vect2::vect2(const vect2 & other) : x(other.getX()), y(other.getY()) {}

//copy assignment
vect2 & vect2::operator= (const vect2 & rhs)
{
    if (this != &rhs)
    {
        x = rhs.getX();
        y = rhs.getY();
    }
    return *this;
}

//getter setters
int vect2::getX() const
{
    return x;
}

void vect2::setX(int x)
{
    this->x = x;
}

int vect2::getY() const
{
    return y;
}

void vect2::setY(int y)
{
    this->y = y;
}

//operators
vect2 & vect2::operator+= (const vect2 & rhs) // v1 += v2
{
    x += rhs.getX();
    y += rhs.getY();
    return *this;
}   

vect2 & vect2::operator+= (int num)           // v += 1
{
    this->x += num;
    this->y += num;
    return *this;
}

vect2 & vect2::operator++ ()                      // ++c
{
    ++x;
    ++y;
    return *this;
}

const vect2 vect2::operator++ (int)         // v++
{
    vect2 temp = *this;
    x++;
    y++;
    return temp;
}

vect2 vect2::operator+ (const vect2 & rhs) const // v1 + v2
{
    return vect2(x + rhs.getX(), y + rhs.getY());
}

vect2 vect2::operator- (const vect2 & rhs) const // v1 - v2
{
    return vect2(x - rhs.getX(), y - rhs.getY());
}

vect2 vect2::operator* (const vect2 & rhs) const // v1 * v2
{
    return vect2(x * rhs.getX(), y * rhs.getY());
}

vect2 vect2::operator/ (const vect2 & rhs) const // v1 / v2
{
    if (rhs.getX() == 0 || rhs.getY() == 0)
    {
        throw std::invalid_argument("Division by zero");
    }
    return vect2(x / rhs.getX(), y / rhs.getY());
}

vect2 vect2::operator+ (int num) const // v1 + 1
{
    return vect2(x + num, y + num);
}
vect2 vect2::operator- (int num) const // v1 - 1
{
    return vect2(x - num, y - num);
}
vect2 vect2::operator* (int num) const // v1 * 1
{
    return vect2(x * num, y * num);
}

vect2 vect2::operator/ (int num) const // v1 / 1
{
    if (num == 0)
    {
        throw std::invalid_argument("Division by zero");
    }
    return vect2(x / num, y / num);
}

bool vect2::operator== (const vect2 & rhs) const   // v1 == v2
{
    return (x == rhs.getX() && y == rhs.getY());
}

bool vect2::operator!= (const vect2 & rhs) const   // v1 != v2
{
    return !(*this == rhs);
}

const int & vect2::operator[] (int index) const     // v[index] const
{
    if (index == 0)
        return x;
    else if (index == 1)
        return y;
    else
        throw std::out_of_range("Index out of range");
}

int & vect2::operator[] (int index)                // v[index]
{
    if (index == 0)
        return x;
    else if (index == 1)
        return y;
    else
        throw std::out_of_range("Index out of range");
}

std::ostream & operator<< (std::ostream & out, const vect2 & v) // out << c
{
    out << "{" << v.getX() << ", " << v.getY() << "}";
    return out;
}

std::istream & operator>> (std::istream & in, vect2 & v)        // in >> c
{
    int x, y;
    char comma, brace1, brace2;
    in >> brace1 >> x >> comma >> y >> brace2;
    if (in && brace1 == '{' && comma == ',' && brace2 == '}')
    {
        v.setX(x);
        v.setY(y);
    }
    else
    {
        in.setstate(std::ios::failbit);
    }
    return in;
}
