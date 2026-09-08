#include <iostream>

#include "bigfloat.hpp"
using namespace math;

BigFloat fact(BigFloat n){
    return (n > 0?n*fact(n - 1):1);
}

int main() {
  BigFloat::set_default_precision(100);
  BigFloat a = 1000;
  
  std::cout << fact(a) << std::endl;   
  
  return 0;
}
