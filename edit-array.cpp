/*
Author: Carrie
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Using arrays to store, update, and retrieve numbers, Lab2C

Write a program edit-array.cpp that creates an array of 10 integers, and provides the user with an interface to edit any of its elements.
*/

#include <iostream>

int main() {

  int myData[10]; //creating an array of 10 integers

  for (int i = 0; i < 10; i++){ //filling all cells of the array with a value of 1
    myData[i] = 1; 
    //std:: cout << myData[i]<< " "; //printing all elements to be displayed on the screen
  }

  int index; //cell index
  int newValue; //new value

  do{
    for (int i = 0; i < 10; i++){
      std:: cout << myData[i]<< " "; //printing the array
      }
      std:: cout << "\nEnter an index:"<< std:: endl; //get i and v from the user//get i and v from the user
      std:: cin >> index;
      
      std:: cout << "Enter a value that you would like to replace the index with: "<< std:: endl; //get i and v from the user
      std:: cin >> newValue;

      
    if ((index >= 0) && (index <10)){ //if i is good, update the array at index i
      myData[index] = newValue;
      }
    else{
      std:: cout << "Index out of range. Exit"<< std:: endl; //if i is out of range, the program stops running
    }
    
  }
  while((index >= 0) && (index <10));//if the index was good, repeat
    
  return 0;
}
