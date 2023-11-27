//
//  triangle.hpp
//  cppm-homework-06.03
//
//  Created by a1ex on 11/22/23.
//

#pragma once
#include <iostream>
#include "figure.hpp"

class Triangle : public Figure
{
protected:
    int a = 0;
    int b  = 0;
    int c = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    
public:
    Triangle (int a,int b, int c, int A, int B, int C);
    
    std::string get_sides ();
    std::string get_angles ();
    void print_info() override;
    
    
};
