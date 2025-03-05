#include <iostream>
#include <random>

int main() { 
  
  std::random_device rd; 
  std::mt19937 generator(rd()); 
  std::uniform_int_distribution<int> distribution(100, 999); 
  int numberX = distribution(generator); 
  std::cout << "The number is: " << numberX << std::endl;
}