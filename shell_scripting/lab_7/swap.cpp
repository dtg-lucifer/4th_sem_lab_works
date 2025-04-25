#include <iostream>

using std::cout, std::endl;

int main() {
  int a{10}, b{20}, temp{0};

  cout << "Before swaping" << "a = " << a << " " << "b = " << b << endl;

  temp = a;
  a = b;
  b = temp;

  cout << "After swaping" << "a = " << a << " " << "b = " << b << endl;

  return 0;
}
