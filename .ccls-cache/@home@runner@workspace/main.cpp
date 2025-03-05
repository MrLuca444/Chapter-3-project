#include <iostream>
#include <random>

int main() { 
  int answer; 
  std::random_device rd; 
  std::mt19937 generator(rd()); 
  std::uniform_int_distribution<int> distribution(100, 999); 
  int numberX = distribution(generator); 
  int numberY = distribution(generator);
  std::cout << " " << numberX << std::endl;
  std::cout << "+" << numberY << std::endl;
  std::cout << "----" << std::endl;
  std::cin >> answer;
  if (answer == numberX + numberY) {
  std::cout << "Correct!" << std::endl;
}else{
  std::cout << "Incorrect!" << std::endl;
  }
}