#ifndef _CEASOR_CIPHER_HPP_
#define _CEASOR_CIPHER_HPP_

#include <string>

class CeasorCipher
{
private:
  int shift;

public:
  CeasorCipher(int shiftValue) : shift(shiftValue) {}
  void encrypt(std::string &text);
  void decrypt(std::string &text);
};

#endif // _CEASOR_CIPHER_HPP_