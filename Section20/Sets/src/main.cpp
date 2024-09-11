#include <iostream>
#include <set>
#include <algorithm>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() : name{"Unknown"}, age{0} {}

    Person(std::string name, int age) 
        : name{name}, age{age}  {}

    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << ":" << p.age;
    return os;
}

template <typename T>
void display(const std::set<T> &l) {
    std::cout << "[ ";
    for (const auto &elem: l) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {

  std::set<int> s1 {1, 4, 3, 5, 2};
  display(s1);

  s1 = {1, 2, 3, 1, 1, 2, 2, 3, 4, 5, 5};
  display(s1);  // Duplicates are going to be omitted
  
  s1.insert(10);
  s1.insert(10);
  display(s1);
}

int main() {

  test1();
  return 0;
}