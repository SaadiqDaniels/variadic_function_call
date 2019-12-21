//
// Created by Saadiq Daniels on 12/15/2019.
//

#ifndef VARIADIC_FUNCTION_CALL_VFCALL_H
#define VARIADIC_FUNCTION_CALL_VFCALL_H

#include <vector>

typedef void(*vfunct)(...);

template<typename T>
T CallVFunctWithArr(T (*fun)(...), const std::vector<void *> &vargs) {
  
  switch (vargs.size())
  {
  case 0:
    return fun();
  case 1:
    return fun(vargs[0]);
  case 2:
    return fun(vargs[0], vargs[1]);
  case 3:
    return fun(vargs[0], vargs[1], vargs[2]);
  case 4:
    return fun(vargs[0], vargs[1], vargs[2], vargs[3]);
  case 5:
    return fun(vargs[0], vargs[1], vargs[2], vargs[3], vargs[4]);
  case 6:
    return fun(vargs[0], vargs[1], vargs[2], vargs[3], vargs[4], vargs[5]);
  case 7:
    return fun(vargs[0], vargs[1], vargs[2], vargs[3], vargs[4], vargs[5], vargs[6]);
  case 8:
    return fun(vargs[0], vargs[1], vargs[2], vargs[3], vargs[4], vargs[5], vargs[6], vargs[7]);
  case 9:
    return fun(vargs[0], vargs[1], vargs[2], vargs[3], vargs[4], vargs[5], vargs[6], vargs[7], vargs[8]);
  case 10:
    return fun(vargs[0], vargs[1], vargs[2], vargs[3], vargs[4], vargs[5], vargs[6], vargs[7], vargs[8], vargs[9]);
  default:
    throw "Too many arguments";
  }
}

#endif //VARIADIC_FUNCTION_CALL_VFCALL_H
