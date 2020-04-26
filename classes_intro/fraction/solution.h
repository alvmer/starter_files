#pragma once
#include <exception>

int gcd(int a, int b) {
  throw std::logic_error("Not implemented");
}

class Fraction {
 public:
  Fraction();
  Fraction(int num, int den);
  Fraction(int num);
  Fraction(const Fraction& other);
  ~Fraction();

  int num() const { /* your code here */ }
  int den() const { /* your code here */ }

  /* your code here */

  friend std::ostream& operator<<(std::ostream& out, const Fraction& fract);

 private:
  int num_, den_;
};

std::ostream& operator<<(std::ostream& out, const Fraction& fract) {
    throw std::logic_error("Not implemented");
}
