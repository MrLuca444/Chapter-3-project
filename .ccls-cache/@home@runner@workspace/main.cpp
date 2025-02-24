#include <iostream>

int main() { 
  int cookies;
  int recipe = 48;
  double sugar = 1.5 / recipe;
  double butter = 1.0 / recipe;
  double flour = 2.75 / recipe;
std::cout << "How many cookies would you like to make? " << std::endl;
  std::cin >> cookies;
  std::cout << "You need will need" << std::endl << cookies * sugar << " cups of sugar " << std::endl << cookies * butter << " cups of butter " << std::endl << cookies * flour << " cups of flour" << std::endl;
}