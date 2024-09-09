#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>

class Person {
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
    return (this -> name == rhs.name
           && this -> age == rhs.age);
  }
};

void find_test() {
  std::cout << "\n====================" << std::endl;

  std::vector<int> vec {1, 2, 3, 4, 5};

  auto loc = std::find(std::begin(vec), std::end(vec), 1);

  if (loc != std::end(vec))
    std::cout << "Found the number: " << *loc << std::endl;
  else
    std::cout << "Couldn't find the number" << std::endl;

  std::cout << "====================" << std::endl;

  std::list<Person> players {
    {"Larry", 18},
    {"Moe", 21},
    {"Nick", 22},
    {"Lilian", 21},
    {"Jessica", 19}
  };

  auto loc1 = std::find(players.begin(), players.end(), Person{"Moe", 22});

  if (loc1 != players.end()) {
    std::cout << "Found Moe!" << std::endl;
  } else {
    std::cout << "Moe not found" << std::endl;
  }

  std::cout << "====================" << std::endl;
}

int main() {

  find_test();

  return 0;
}