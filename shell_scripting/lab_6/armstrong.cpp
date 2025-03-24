#include <cmath>
#include <iostream>

using std::cout, std::cin, std::endl;

int count_digits(int n) {
  int len{0};
  while (n > 0) {
    int d = n % 10;
    n = n / 10;
    len++;
  }

  return len;
}

int main() {
  int n{0}, tmp;
  cout << "Enter a number: ";
  cin >> n;

  tmp = n;

  int len = count_digits(n);
  int new_n{0};

  while (n > 0) {
    int d = n % 10;
    new_n += static_cast<int>(std::pow(d, len));
    n /= 10;
  }

  if (new_n == tmp) {
    cout << "Armstrong number!" << endl;
  } else {
    cout << "Not Armstrong number!" << endl;
  }

  return 0;
}
