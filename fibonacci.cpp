/*
Author: Carrie
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Computing Fibonacci Numbers with Loops and Arrays 0, 1, 1, 2, 3, 5, 8, 13…, Lab2D

To make a C++ program to keep track of the previous numbers so that we can compute the new ones, we can use an array of integers

What is happening when the numbers approach two billions? Describe what you observe and explain why it is happening in a program comment.
*/

#include <iostream>

int main(){
	
	int fib[60];
	
	fib[0] = 0;
	std:: cout<< fib[0] << std::endl;
	
	fib[1] = 1;
 	std:: cout<< fib[1] << std::endl;

	for (int i = 2 ; i < 60; i++){
		fib[i]= fib[i-1] + fib[i-2];
    	std:: cout << fib[i] << std:: endl;
    	}

  	return 0;
}	

/*
As the numbers approach two billions, the program starts to output negative numbers. This is due to integer overflow, where the numbers become too large.
*/
