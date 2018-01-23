//
//  Numbers.cpp
//  CPP-PRG-13-10-Number-Array-Class
//
//  Created by Keith Smith on 11/21/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include "Numbers.hpp"

void Numbers::setArraySize(int arrSize)
{
    intArrSize = arrSize;
}

void Numbers::generateArray()
{
    fltArrayNumbers = new float[intArrSize];
}

void Numbers::modifyArrayValue(int index, float value)
{
    fltArrayNumbers[index] = value;
}

float *Numbers::getArray() const
{
    return fltArrayNumbers;
}

Numbers::Numbers(int arrSize)
{
    intArrSize = arrSize;
    fltArrayNumbers = new float[intArrSize];
}
Numbers::Numbers()
{
    intArrSize = 0;
    fltArrayNumbers = new float[intArrSize];
}
