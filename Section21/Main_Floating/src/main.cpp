#include <iostream>
#include <iomanip>

int main() {
  double num1 {123456.789123456};
  double num2 {123.456};
  double num3 {123.0};

  std::cout << "--Default--" << std::endl;

  std::cout << num1 << std::endl;
  std::cout << num2 << std::endl;
  std::cout << num3 << std::endl;

  std::cout << "--Set Precision 2--" << std::endl;

  std::cout << std::setprecision(2);
  std::cout << num1 << std::endl;
  std::cout << num2 << std::endl;
  std::cout << num3 << std::endl;

  std::cout << "--Set Precision 5--" << std::endl;

  std::cout << std::setprecision(5);
  std::cout << num1 << std::endl;
  std::cout << num2 << std::endl;
  std::cout << num3 << std::endl;

  std::cout << "--Set Precision 9--" << std::endl;
  std::cout << "--     Fixed     --" << std::endl;

  std::cout << std::setprecision(5) << std::fixed;
  std::cout << num1 << std::endl;
  std::cout << num2 << std::endl;
  std::cout << num3 << std::endl;
  return 0;
}