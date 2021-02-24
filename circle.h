// Name: Sarah Coufal
// Date: 2/22/21

#pragma once
#include <iostream>

class Circle 
{
    public:
        Circle(); //default constructor
        Circle(int rad); //takes radius as argument
        Circle(const Circle &c1); //copy constructor
        Circle& operator=(const Circle& c1); //assignment operator
        int getRadius(); //accessor
        void setRadius(int rad); //setter
        float computeArea();
        friend Circle operator+(const Circle& c1, const Circle& c2); //add operator
        friend std::ostream& operator<<(std::ostream& os, const Circle& c); //output stream operator
        ~Circle(); //destructor
    private:
        int radius = 0;
};




