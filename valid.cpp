/*
Author: Carrie
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Input Validation, Lab2A

Asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input. After a valid value is obtained, print this number n squared.
*/

#include <iostream>

int main() {
	
	int integer;
	int squaredInteger;
	
	std:: cout << "Enter an integer ranging from 0 to 100: " << std:: endl;
	std:: cin >> integer;
	
	while ((integer <= 0) || (integer >= 100)){
		std:: cout << "Enter a different integer: " << std:: endl;
		std:: cin >> integer;
	}
	squaredInteger = integer*integer;
	std:: cout << "This number squared is " << squaredInteger << ". \n";
	
	return 0;
}
