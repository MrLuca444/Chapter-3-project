#include <iostream>
#include <cmath>

int main() { 

  int principal;
  int rate ;
  int time ;
  int parenthesis = rate / time + 1 ;
  int powwow = pow(parenthesis, time);
  int amount = principal * powwow; 
  std::cout << "Enter the interest rate, times compounded, and the principle: ";
  std::cin >> rate >> time >> principal;
  std::cout << "Interest Rate: " << rate << std::endl;
  std::cout << "Times Compounded: " << time << std::endl;
  std::cout << "Principle: " << principal << std::endl;
  std::cout << "Amount in Savings: " << amount << std::endl;
  return 0;
  
}