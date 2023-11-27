//
//  quadrilateral.cpp
//  cppm-homework-06.03
//
//  Created by a1ex on 11/22/23.
//

#include "quadrilateral.hpp"


Quadrilateral::Quadrilateral (int a, int b, int c, int d, int A, int B, int C, int D)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
}

std::string Quadrilateral::get_sides ()
{
    std::string all_sides = "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d);
    return all_sides;
}

std::string Quadrilateral::get_angles ()
{
    std::string all_angles = "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D);
    return all_angles;
}

void Quadrilateral::print_info ()
{
    std::cout << "Sides: ";
    std::cout << get_sides() << std::endl;
    std::cout << "Angles: ";
    std::cout << get_angles() << std::endl;
}
