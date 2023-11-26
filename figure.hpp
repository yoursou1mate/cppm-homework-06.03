//
//  figure.hpp
//  cppm-homework-06.03
//
//  Created by a1ex on 11/22/23.
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
