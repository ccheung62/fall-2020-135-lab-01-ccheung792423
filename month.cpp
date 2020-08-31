/*
Author: Cheuk Lam Cheung
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Number of days in a given month, Lab 1D

The program prints the number of days in the inputted month and year
*/

#include <iostream>

int leap (int yr) {  //checked condition for leap or common year
  if (yr%4 != 0) {  
    return 1; // 1= common year
  }
  else if (yr%100 != 0) {
    return 2; // 2= leap year
  }
  else if (yr%400 != 0) {
    return 1;
  }
  else {
    return 2;
  }
}

int main () {
  std::cout << "Enter year: "; //stores input as an integer called year
  int year;
  std::cin >> year;
  std::cout << "Enter month: ";
  int month;
  std::cin >> month;
  if (month == 2) { // check if it's a leap year
    if (leap(year)==2) {
      std::cout << "\n29 days" << std::endl;
    }
    else {
      std::cout << "\n28 days" << std::endl;
    }
  }
  else {
    if (month >= 8) {  //check if it's 30 or 31 days
      month--;
    }
    if (month%2 == 0) {
      std::cout << "\n30 days" << std::endl;
    }
    else {
      std::cout << "\n31 days" << std::endl;
    }
  }
  return 0;
}


