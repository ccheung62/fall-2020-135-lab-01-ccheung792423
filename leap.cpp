/* 
Author: Cheuk Lam Cheung
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: A leap year or a common year?, Lab 1C

The program tells the user if the inputted year is a leap year or a common year
*/

#include <iostream>

int main () {
  std::cout << "Enter year: "; //stores input as an integer called year
  int year;
  std::cin >> year;
  if (year%4 != 0) {   //checked condition for leap or common year
    std::cout << "\nCommon year" << std::endl;
  }
  else if (year%100 != 0) {
    std::cout << "\nLeap year" << std::endl;
  }
  else if (year%400 != 0) {
    std::cout << "\nCommon year" << std::endl;
  }
  else {
    std::cout << "\nLeap year" << std::endl;
  }
  return 0;
}
