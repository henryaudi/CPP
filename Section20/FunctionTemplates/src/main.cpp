#include <iostream>
#include <string>

template <typename T>
T min(T a, T b) {
  
  return (a < b) ? a : b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b) {
  
  std::cout << a << " " << b << std::endl;
}

int main() {

  std::cout << min(2, 3) << std::endl;
  std::cout << min(2, 3) << std::endl;
  std::cout << min('A', 'B') << std::endl;
  std::cout << min(12.5, 2.5) << std::endl;
  std::cout << min(2 + 3, 1 * 30) << std::endl;


}