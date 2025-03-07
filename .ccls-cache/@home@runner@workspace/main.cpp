#include <iostream>
#include <cmath>

int main() { 
 double principal, rate;
  int time;
  std::cout << "Enter the interest rate, times compounded, and the principle: ";
 std::cin >> rate >> time >> principal; 
rate /= 100;
  double amount = principal * pow(1 + rate / time, time); 
  std::cout << "Interest Rate: " << rate << std::endl;
  std::cout << "Times Compounded: " << time << std::endl;
  std::cout << "Principle: " << principal << std::endl;
  std::cout << "Amount in Savings: " << amount << std::endl;
  return 0;
  
}