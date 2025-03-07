#include <iostream>
#include <cmath>

int main() { 

  extern int principal;
  extern int rate ;
  extern int length ;
  int parenthesis = rate / length + 1 ;
  int powwow = pow(parenthesis, length);
  int amount = principal * powwow; 
  std::cout << "Enter the interest rate, times compounded, and the principle: ";
  std::cin >> rate >> length >> principal;
  std::cout << "Interest Rate: " << rate << std::endl;
  std::cout << "Times Compounded: " << length << std::endl;
  std::cout << "Principle: " << principal << std::endl;
  std::cout << "Amount in Savings: " << amount << std::endl;
  return 0;
  
}