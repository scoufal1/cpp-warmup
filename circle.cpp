// Name: Sarah Coufal
// Date: 2/22/21

#include "circle.h"
#include <math.h>

using namespace std;

//default constructor
Circle::Circle() 
{
    radius = 0;
}

//takes radius as argument
Circle::Circle(int rad) 
{
    radius = rad;
}

//copy constructor
Circle::Circle(const Circle& c1) 
{  
    radius = c1.radius;    
}

//assignment operator
Circle& Circle::operator=(const Circle& c1) 
{ 
    radius = c1.radius;
    return *this;
}

//getter method for radius
int Circle::getRadius()
{
    return radius;
}

//setter method for radius
void Circle::setRadius(int rad)
{
    radius = rad;
}

//computes area
float Circle::computeArea()
{
    return M_PI * radius * radius;
}

//add operator
Circle operator+(const Circle& c1, const Circle& c2)
{  
    int rad = c1.radius + c2.radius;
    Circle c(rad);
    return c;
}

//output stream operator
std::ostream& operator<<(std::ostream& os, const Circle& c) 
{
   os << c.radius;
   return os;
}

//destructor
Circle::~Circle() 
{}
