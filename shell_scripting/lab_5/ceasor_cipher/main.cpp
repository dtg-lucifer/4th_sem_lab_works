#include <iostream>
#include <string>

#include "ceasor_cipher.hpp"

int main()
{
  std::string text;
  int shift;

  std::cout << "Enter text: ";
  std::getline(std::cin, text);

  std::cout << "Enter shift: ";
  std::cin >> shift;

  CeasorCipher cipher(shift);
  cipher.encrypt(text);
  std::cout << "Ciphered text: " << text << std::endl;

  cipher.decrypt(text);
  std::cout << "Deciphered text: " << text << std::endl;

  return 0;
}
