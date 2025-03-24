#include <iostream>

using std::cout, std::cin, std::endl;

int main()
{
  int n{0};
  cout << "Enter a number: ";
  cin >> n;

  if (n % 2 == 0)
  {
    cout << n << " is even" << endl;
  }
  else
  {
    cout << n << " is odd" << endl;
  }

  return 0;
}