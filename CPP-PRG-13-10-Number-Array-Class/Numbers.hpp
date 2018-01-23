//
//  Numbers.hpp
//  CPP-PRG-13-10-Number-Array-Class
//
//  Created by Keith Smith on 11/21/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#ifndef Numbers_hpp
#define Numbers_hpp

#include <stdio.h>

class Numbers
{
private:
    int intArrSize;
    float *fltArrayNumbers = nullptr;
public:
    void setArraySize(int);
    void generateArray();
    void modifyArrayValue(int, float);
    
    float *getArray() const;
    
    Numbers(int);
    Numbers();
};

#endif /* Numbers_hpp */
