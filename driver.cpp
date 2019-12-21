//
// Created by Saadiq Daniels on 12/15/2019.
//

#include "vfcall.h"
#include <iostream>
#include <vector>

void function1(int const *a, float const *b, char const * c, bool const * d) {

	std::cout << *a << " " << *b << " " << *c << " " << *d << std::endl;
}

int main() {

	vfunct fptr = reinterpret_cast<vfunct>(function1);

	int   a = 3;
	float b = 2.25667f;
	char  c = 'a';
	bool  d = true;

	std::vector<void *> vector{&a,
	                           &b,
	                           &c,
	                           &d};

	CallVFunctWithArr(fptr, vector);

	return 0;
}