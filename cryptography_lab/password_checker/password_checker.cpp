#include <iostream>
#include <string>

void passwordChecker(const std::string &pass)
{
  if (pass.empty())
  {
    std::cout << "Please give an input" << std::endl;
    return;
  }

  if (pass.length() < 8)
  {
    std::cout << "Length of the password is short (less than 8)" << std::endl;
    return;
  }

  for (char c : pass)
  {
    if (c == ' ')
    {
      std::cout << "Password should not contain spaces" << std::endl;
      return;
    }
  }

  bool hasUppercase = false;
  bool hasLowercase = false;
  bool hasDigit = false;
  bool hasSpecial = false;
  std::string specialChars = "!@#$%^&*";

  for (char c : pass)
  {
    if (c >= 'A' && c <= 'Z')
      hasUppercase = true;
    else if (c >= 'a' && c <= 'z')
      hasLowercase = true;
    else if (c >= '0' && c <= '9')
      hasDigit = true;
    else if (specialChars.find(c) != std::string::npos)
      hasSpecial = true;
  }

  if (!hasUppercase)
  {
    std::cout << "Password should contain at least one uppercase letter" << std::endl;
    return;
  }

  if (!hasLowercase)
  {
    std::cout << "Password should contain at least one lowercase letter" << std::endl;
    return;
  }

  if (!hasDigit)
  {
    std::cout << "Password should contain at least one digit" << std::endl;
    return;
  }

  if (!hasSpecial)
  {
    std::cout << "Password should contain at least one special character" << std::endl;
    return;
  }

  std::cout << "The password is secure" << std::endl;
}

int main()
{
  std::string pass;
  std::cout << "Enter the password to check: ";
  std::getline(std::cin, pass);

  passwordChecker(pass);

  return 0;
}
