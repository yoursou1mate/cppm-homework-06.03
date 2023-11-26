//
//  rectangle.hpp
//  cppm-homework-06.03
//
//  Created by a1ex on 11/22/23.
//

#pragma once
#include <iostream>
#include "quadrilateral.hpp"

class Rectangle : public Quadrilateral
{
public:
    Rectangle (int a, int b) : Quadrilateral (a, b, c = a, d = b, A = 90, B = A, C = A, D = A){};
};
