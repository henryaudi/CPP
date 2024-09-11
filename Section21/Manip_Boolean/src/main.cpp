#include <iostream>
#include <iomanip>

int main() {

  std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl; 
  std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl; 

  std::cout << std::boolalpha;
  std::cout << "boolapha - (10 == 10): " << (10 == 10) << std::endl; 
  std::cout << "boolapha - (10 == 20): " << (10 == 20) << std::endl; 

  std::cout << std::noboolalpha;
  std::cout << "noboolapha - (10 == 10):  " << (10 == 10) << std::endl; 
  std::cout << "noboolapha - (10 == 20):  " << (10 == 20) << std::endl; 

  std::cout.setf(std::ios::boolalpha);
  std::cout << "boolapha - (10 == 10): " << (10 == 10) << std::endl; 
  std::cout << "boolapha - (10 == 20): " << (10 == 20) << std::endl; 

  std::cout << std::resetiosflags(std::ios::boolalpha);
  std::cout << "boolapha - (10 == 10): " << (10 == 10) << std::endl; 
  std::cout << "boolapha - (10 == 20): " << (10 == 20) << std::endl; 

  return 0;
}