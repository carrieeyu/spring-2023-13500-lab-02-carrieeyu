/*
Author: Carrie
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Print all integers from the requested interval, Lab2B

Write a program print-interval.cpp that asks the user to input two integers L and U (representing the lower and upper limits of the interval), and print out all integers in the range L ≤ i < U separated by spaces.
*/

#include <iostream>
#include "funcs.h"

int main() {

	print_interval(0,5); //test 1
  	std:: cout << "\n";

  	print_interval(5,30); //test 2
  	std:: cout << "\n";

  	print_interval(45,65); //test 3
  	std:: cout << "\n";

  	print_interval(-20,-10); //test 4
  	std:: cout << "\n";

  	print_interval(-5,3); //test 5
  	std:: cout << "\n";
}
