/* Header for the vect class */
#ifndef VECT2_H
#define VECT2_H

#include <iostream>
 
class vect2
{
private:
   int x;
   int y;
 
public:
    explicit vect2(int x = 0, int y = 0);
    //copy constructor
    //destructor
    //copy assignment

    //getter setters
    int getX() const;
    void setX(int x);
    int getY() const;
    void setY(int y);
    //void setValue(int x, int y);

    Vect & operator+= (const vect2 & rhs); // v1 += c2
    Vect & operator+= (int x);           // v += 1

    Vect & operator++ ();                      // ++c
    const Vect operator++ (int dummy);         // v++

    // v1 + v2
    // v1 - v2
    // v1 * v2
    // v1 / v2

    bool operator== (const vect2 & rhs) const;   // v1 == v2
    bool operator!= (const vect2 & rhs) const;   // v1 != v2
};

std::ostream & operator<< (std::ostream & out, const vect2 & v); // out << c
std::istream & operator>> (std::istream & in, vect2 & v);        // in >> c
 
#endif