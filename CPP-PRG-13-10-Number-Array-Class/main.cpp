//
//  main.cpp
//  CPP-PRG-13-10-Number-Array-Class
//
//  Created by Keith Smith on 11/21/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Design a class that has an array of floating-point numbers. The constructor should
//  accept an integer argument and dynamically allocate the array to hold that many
//  numbers. The destructor should free the memory held by the array. In addition, there
//  should be member functions to perform the following operations:
//
//  * Store a number in any element of the array
//  * Retrieve a number from any element of the array
//  * Return the highest value stored in the array
//  * Return the lowest value stored in the array
//  * Return the average of all the numbers stored in the array
//
//  Demonstrate the class in a program.

#include <iostream>
#include "Numbers.hpp"

int main()
{
    Numbers numbers(5);
    
    float *fltArray = nullptr;
    fltArray = new float[5];
    
    numbers.modifyArrayValue(0, 1.0);
    numbers.modifyArrayValue(1, 2.0);
    numbers.modifyArrayValue(2, 3.0);
    numbers.modifyArrayValue(3, 4.0);
    numbers.modifyArrayValue(4, 5.0);
    
    fltArray = numbers.getArray();
    
    std::cout << *(fltArray + 0) << std::endl;
    std::cout << *(fltArray + 1) << std::endl;
    std::cout << *(fltArray + 2) << std::endl;
    std::cout << *(fltArray + 3) << std::endl;
    std::cout << *(fltArray + 4) << std::endl;
    
    return 0;
}
