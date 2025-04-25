#include <cstring>
#include <iostream>

using std::cout, std::endl;

int main() {
  char s_1[50] = "Hello world";
  char s_2[] = " New";

  strcat(s_1, s_2);

  cout << "After concatenating s_1 = " << s_1 << endl;

  return 0;
}
