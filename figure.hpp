//
//  figure.hpp
//  main.cpp
//
//  Created by a1ex on 12/10/23.
//

#pragma once
#include <iostream>

class Figure
{
protected:
    int sides_count = 0;
    std::string name = "Figure :";
public:
    virtual void print_info ();
    
};

