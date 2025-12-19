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
    vect2(const vect2 & other);
    //destructor
    ~vect2() {};
    //copy assignment
    vect2 & operator= (const vect2 & rhs);

    //getter setters
    int getX() const;
    void setX(int x);
    int getY() const;
    void setY(int y);
    //void setValue(int x, int y);

    vect2 & operator+= (const vect2 & rhs); // v1 += v2
    vect2 & operator+= (int num);           // v += 1

    vect2 & operator++ ();                      // ++c
    const vect2 operator++ (int);         // v++

    vect2 operator+ (const vect2 & rhs) const; // v1 + v2
    vect2 operator- (const vect2 & rhs) const; // v1 - v2
    vect2 operator* (const vect2 & rhs) const; // v1 * v2
    vect2 operator/ (const vect2 & rhs) const; // v1 / v2

    vect2 operator+ (int num) const; // v1 + 1
    vect2 operator- (int num) const; // v1 - 1
    vect2 operator* (int num) const; // v1 * 1
    vect2 operator/ (int num) const; // v1 / 1

    bool operator== (const vect2 & rhs) const;   // v1 == v2
    bool operator!= (const vect2 & rhs) const;   // v1 != v2

    const int & operator[] (int index) const;     // v[index] const
    int & operator[] (int index);                // v[index]
};

std::ostream & operator<< (std::ostream & out, const vect2 & v); // out << c
std::istream & operator>> (std::istream & in, vect2 & v);        // in >> c
 
#endif