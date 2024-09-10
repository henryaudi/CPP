#include <iostream>
#include <vector>
#include <algorithm>

class Person {
  friend std::ostream &operator<<(std::ostream &os, const Person &p);
  std::string name;
  int age;

public:
  Person() = default;

  Person(std::string name, int age)
    : name {name}, age {age} {}
  
  bool operator<(const Person &rhs) const {
    return this -> age < rhs.age;
  }

  bool operator==(const Person &rhs) const {
    return (
      this -> name == rhs.name
      && this -> age == rhs.age
    );
  }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
  os << p.name << ": " << p.age;
  return os;
}

void display2(const std::vector<int> &vec) {
  std::cout << "[";
  std::for_each(vec.begin(), vec.end(),
    [](int x) {std::cout << x << " ";});
  std::cout << "]"; 
}

template <typename T>
void display(const std::vector<T> &vec) {
  std::cout << "[";
  for (const auto &elem : vec)
    std::cout << elem << " ";
  std::cout << "]" << std::endl;
}

void test1() {
  std::cout << "\n================" << std::endl;

  std::vector<int> vec {1, 2, 3, 4, 5};
  display(vec);

  vec = {2, 3, 4, 5};
  display2(vec);

  std::vector<int> vec1(10, 100);
  display(vec1);
}

void test2() {
  std::cout << "\n================" << std::endl;
  std::vector<int> vec {1, 2, 3, 4, 5};
  display(vec);
  std::cout << "\nvec size - " << vec.size() << std::endl;
  std::cout << "vec max size - " << vec.max_size() << std::endl;
  std::cout << "vec capacity - " << vec.capacity() << std::endl;

  vec.push_back(6);
  display(vec);
  std::cout << "\nvec size - " << vec.size() << std::endl;
  std::cout << "vec max size - " << vec.max_size() << std::endl;
  std::cout << "vec capacity - " << vec.capacity() << std::endl;

  vec.shrink_to_fit();
  std::cout << "\nafter shrinking vec capacity - " << vec.capacity() << std::endl;

  vec.reserve(100);
  std::cout << "\nafter reserving vec capacity - " << vec.capacity() << std::endl;
}

int main() {
  test2();

  return 0;
}
