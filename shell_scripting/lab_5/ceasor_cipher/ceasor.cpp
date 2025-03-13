#include <string>
#include <cctype>

#include "ceasor_cipher.hpp"

void CeasorCipher::encrypt(std::string &text)
{
  for (char &c : text)
  {
    if (std::isalpha(c))
    {
      char base = std::isupper(c) ? 'A' : 'a';
      c = (c - base + shift) % 26 + base;
    }
  }
}

void CeasorCipher::decrypt(std::string &text)
{
  for (char &c : text)
  {
    if (std::isalpha(c))
    {
      char base = std::isupper(c) ? 'A' : 'a';
      c = (c - base - shift + 26) % 26 + base;
    }
  }
}
