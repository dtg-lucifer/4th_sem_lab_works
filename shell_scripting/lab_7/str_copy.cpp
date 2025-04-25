#include <cstring>
#include <iostream>

using std::cout, std::endl;

int main() {
  char s_1[] = "Hello world";
  char s_2[50];

  strcpy(s_2, s_1);

  cout << "After copying s_2 = " << s_2 << endl;

  return 0;
}
