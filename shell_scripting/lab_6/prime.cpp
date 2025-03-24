#include <iostream>
#include <cmath>

using std::cout, std::cin, std::endl;

int main()
{
  int n{0};

  cout << "Enter a number: ";
  cin >> n;

  for (int i = 2; i <= sqrt(n); ++i)
  {
    if (n % i == 0)
    {
      cout << "Not prime" << endl;
      break;
    }
  }

  cout << "Prime" << endl;

  return 0;
}