#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

void display(const std::vector<int> &vec) {
  std::cout << "[";
  for (auto const &i : vec) {
    std::cout << i << " ";
  }
  std::cout << "]" << std::endl;
}

void test1() {
  std::cout << "\n=======================" << std::endl;
  std::vector<int> nums1 {1, 2, 3, 4, 5};
  std::vector<int>::iterator it = nums1.begin();
  std::cout << *it << std::endl;

  it++;
  std::cout << *it << std::endl;

  it += 2;
  std::cout << *it << std::endl;

  it -= 2;
  std::cout << *it << std::endl;

  std::cout << "=======================" << std::endl;
}

void test2() {
  std::cout << "\n=======================" << std::endl;

  std::vector<int> nums1 {1, 2, 3, 4, 5};
  std::vector<int>::iterator it = nums1.begin();

  while (it != nums1.end()) {
    std::cout << *it << std::endl;
    it++;
  }

  std::cout << "=======================" << std::endl;
}

void test3() {
  std::cout << "\n=======================" << std::endl;

  std::vector<int> nums1 {1, 2, 3, 4, 5};
  std::vector<int>::const_iterator it1 = nums1.begin();

  while (it1 != nums1.end()) {
    std::cout << *it1 << std::endl;
    it1++;
  }

  std::cout << "=======================" << std::endl;
}


int main() {

  // test1();
  test2();

  return 0;
}