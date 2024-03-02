#include <iostream>
int main(void) {
  int a, b;
  b = 5;
  b = 2; // linha 7
  b = a; // linha 8
  a = b; // linha 9

  std::cout << b << a;
}
