//
// Created by Saadiq Daniels on 12/15/2019.
//

#include "vfcall.h"
#include <iostream>
#include <vector>

void function1(int const* x, float const *d)
{
    std::cout << *x  << " " << *d << std::endl;
}

int main()
{
    vfunct fptr = reinterpret_cast<vfunct>(function1);

    int x = 3;
    float d = 2.25667f;

    std::vector<void*> vector { &x, &d };

    CallVFunctWithArr(fptr, vector);

    return 0;
}