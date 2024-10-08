#include <iostream>

int main() {

  int miles {};
  int gallons {};
  double miles_per_gallon {};

  std::cout << "Enter the miles ";
  std::cin >> miles;
  std::cout << "Enter the gallons ";
  std::cin >> gallons;

  try {
    if (gallons == 0) 
      throw 0;
    
    miles_per_gallon = static_cast<double>(miles) / gallons;
    std::cout << "Result: " << miles_per_gallon << std::endl;
  } 
  catch (int &ex) {
    std::cout << "Can't divide by zero." << std::endl;  
  }

  return 0;
}