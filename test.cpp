#include <iostream>
#include "bignum.h"

int main() {
  Bignum a(10);
  Bignum b("941231");
  Bignum c("418381293129381983232113");
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;
  std::cout << b.size() << std::endl;
  std::cout << b[0] << std::endl;
  
  std::cout << a[4] << std::endl;
  std::cout << a.size() << std::endl;
//  for(int i=10;i>0;i--) {
//    std::cout << a[i];
//  }
//  std::cout << std::endl;
//  std::cout << a[2];
  return 0;
}
