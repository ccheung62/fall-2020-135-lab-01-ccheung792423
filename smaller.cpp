/* 
Author: Cheuk Lam Cheung
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Find the smaller of two integers, Lab1A

The program prints out the smaller of the two inputted intergers
*/ 


#include <iostream>

int main() {
  int first;  //stores input to integers
  std::cout << "Enter the first number: ";
  std::cin >> first;
  int sec;
  std:: cout << "Enter the second number: ";
  std:: cin >> sec;
  if (first < sec) { //compare and prints out the smallest integer
    std:: cout << "\nThe smaller of the two is " << first << std::endl;
  }
  else {
    std:: cout << "\nThe smaller of the two is " << sec << std::endl;
  }
  return 0;
}
