#include <iostream>

using std::endl, std::cout;

class Rectangle {
public:
  int length, width;
  Rectangle(int length, int width) {
    this->length = length;
    this->width = width;
  }

  int area();
};

int Rectangle::area() { return this->width * this->length; }

int main() {
  Rectangle rect(10, 50);

  cout << "Area of the rectangle is " << rect.area() << "sq Unit." << endl;

  return 0;
}
