/* 
Author: Cheuk Lam Cheung
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Find the smaller of three integers, Lab 1B

The program prints out the smallest integer of the three inputted integers
*/

#include <iostream>

int main () {
  std::cout <<"Enter the first number: "; //stores the input as integers
  int first;
  std::cin >> first;
  std::cout <<"Enter the second  number: ";
  int sec;
  std::cin >> sec;
  std::cout <<"Enter the third number: ";
  int third;
  std::cin >> third;
  if (first < sec && first <third) { //compares and prints the smallest integer
    std::cout << "\nThe smaller of the three is " << first << std::endl;
  }
  else if (sec < third) {
    std::cout << "\nThe smaller of the three is " << sec << std::endl;
  }
  else {
    std::cout << "\nThe smaller of the three is " << third << std::endl;
  }
  return 0;
}
