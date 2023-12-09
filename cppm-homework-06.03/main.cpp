#include "main.hpp"
//
//  main.cpp
//  cppm-homework-06.03
//
//  Created by a1ex on 11/22/23.
//

#include <iostream>
#include <string>
#include "figure.hpp"
#include "triangle.hpp"
#include "right_triangle.hpp"
#include "isosceles_triangle.hpp"
#include "equilateral_triangle.hpp"
#include "quadrilateral.hpp"
#include "rectangle.hpp"
#include "square.hpp"
#include "parallelogram.hpp"
#include "rhomb.hpp"

int main(int argc, const char * argv[]) {
   
    
    Triangle triangle (25,27,38,70,65,89);
    std::cout << "Triangle:" << std::endl;
    Figure *figure = &triangle;
    figure->print_info();
    std::cout << std::endl;
    
    Right_triangle right_Triangle (40,35,10,78,34);
    std::cout << "Right triangle:" << std::endl;
    right_Triangle.print_info();
    std::cout << std::endl;
    
    
    Isosceles_triangle isosceles_Triangle (45,70,50,80);
    std::cout << "Isosceles triangle:" << std::endl;
    isosceles_Triangle.print_info();
    std::cout << std::endl;
    
    Equilateral_triangle equilateral_Triangle (45);
    std::cout << "Equilateral triangle:" << std::endl;
    equilateral_Triangle.print_info();
    std::cout << std::endl;
    
    Quadrilateral quadrilateral (45,65,35,75,60,60,30,30);
    std::cout << "Quadrilateral:" << std::endl;
    quadrilateral.print_info();
    std::cout << std::endl;
    
    Rectangle rectangle (45, 65);
    std::cout << "Rectangle:" << std::endl;
    rectangle.print_info();
    std::cout << std::endl;
    
    Square square (45);
    std::cout << "Square:" << std::endl;
    square.print_info();
    std::cout << std::endl;
    
    Parallelogram parallelogram (45,75,35,55);
    std::cout << "Parallelogram:" << std::endl;
    parallelogram.print_info();
    std::cout << std::endl;
    
    Rhomb rhomb (45,35,55);
    std::cout << "Rhomb:" << std::endl;
    rhomb.print_info();
    std::cout << std::endl;
    
    return 0;
}
