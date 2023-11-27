//
//  triangle.cpp
//  cppm-homework-06.03
//
//  Created by a1ex on 11/22/23.
//

#include "triangle.hpp"
//#include <iostream>

Triangle::Triangle (int a,int b, int c, int A, int B, int C)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}


std::string Triangle::get_sides ()
{
    std::string all_sides = "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c);
    return all_sides;
};

std::string Triangle::get_angles ()
{
    std::string all_angles = "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
    return all_angles;
};

void Triangle::print_info()
 {
     std::cout << "Sides: ";
     std::cout << get_sides() << std::endl;
     std::cout << "Angles: ";
     std::cout << get_angles() << std::endl;
};




