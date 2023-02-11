/*
Author: Carrie Yu
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Print all integers from the requested interval, Lab2B

Write a program print-interval.cpp that asks the user to input two integers L and U (representing the lower and upper limits of the interval), and print out all integers in the range L ≤ i < U separated by spaces.
*/

#include <iostream>
#include "funcs.h"

void print_interval(int L, int U){

	for(int i = L; i < U; i++){ //loop starts from lower limit and ending at upper limit(not including)
		std:: cout << i << " "; //spaces in between every integer that's printed
	}

}
