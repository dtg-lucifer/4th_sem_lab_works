#include <iostream>
#include <string>
#include <cctype>

class CaesarCipher {
  public:
    static void encrypt(std::string &text, int shift) {
      for (char &c : text) {
        if (std::isalpha(c)) {
          char base = std::isupper(c) ? 'A' : 'a';
          c = (c - base + shift) % 26 + base;
        }
      }
    }
};

int main() {
  std::string text;
  int shift;

  std::cout << "Enter text: ";
  std::getline(std::cin, text);

  std::cout << "Enter shift: ";
  std::cin >> shift;

  CaesarCipher::encrypt(text, shift);
  std::cout << "Ciphered text: " << text << std::endl;

  return 0;
}
