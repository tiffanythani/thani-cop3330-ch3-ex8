/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tiffany Thani
 */

/*
    8.) Write a program to test an integer value to determine if its odd or even. As always, make sure your output is clear and complete. 
    In other words, don't just output yes or no. Your output should stand alone, like The value of 4 is an even number. Hint: See the remainder (modulo) operator in 3.4
*/

#include <iostream>
using namespace std;
int main() {
  int i;
  cout << "Please enter an integer value "; // Type a number and press enter
  cin >>i;
  if ( i % 2 == 0) //If the remainder of the integer divided by 2 is 0, then we know it's even
  cout << "Your value " << i << " is an even number." << endl;
  else
  cout << "Your value " << i << " is an odd number." << endl;
  return 0;
}

