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

struct Person {
  std::string name;
  int age;

  bool operator<(const Person &rhs) const {
    return this -> age < rhs.age;
  }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
  os << p.name;
  return os;
}

template <typename T>
void my_swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

int main() {
  int x {100};
  int y {2};
  my_swap(x, y);
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;

  Person p1 {"Curly", 50};
  Person p2 {"Moe", 25};
  func<int, int>(10, 20);
  func(2000, "Thomas");
  func(1000, std::string{"Jonas"});
  func(p1, p2);

  // Person p1 {"Curly", 50};
  // Person p2 {"Moe", 25};
  // Person p3 = min(p1, p2);
  // std::cout << p3.name << " is younger" << std::endl;

  // std::cout << min<int>(2, 3) << std::endl;
  // std::cout << min(2, 3) << std::endl;
  // std::cout << min('A', 'B') << std::endl;
  // std::cout << min(12.5, 2.5) << std::endl;
  // std::cout << min(2 + 3, 1 * 30) << std::endl;
}