#include <iostream>

#include "lib1/lib1.hpp"
#include "lib2/lib2.hpp"

int main() {
  std::cout << CLib1::PrintHello() << " ";
  std::cout << CLib2::PrintWorld() << std::endl;
  return 0;
}
