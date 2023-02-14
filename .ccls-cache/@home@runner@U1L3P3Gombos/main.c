/*
  UB C Programming Unit 1 Lesson 3 Program 3
  Seconds to Hours, Minutes, and Seconds
  Max Gombos
*/
#include <stdio.h> //import input and output functions

int main(void) { //define main function
  int inputSeconds, hours, minutes, seconds; 
  //initialize variable as interger

  printf("This program allows you to enter an amount of seconds in whole numbers and the program will convert them to minutes. You will get one prompt:\n\t- Seconds: Please enter your seconds here\n"); //instructions
  
  printf("Seconds: "); //ask user for input
  scanf("%d", &inputSeconds); //accept user input and format as int

  minutes = inputSeconds/60; //convert seconds to minutes
  hours = minutes/60; //convert mintues to hours
  minutes = minutes%60; //find remaining minutes
  seconds = inputSeconds - ((minutes * 60) + ((hours*60)*60));
  //find remaining seconds

  printf("%d seconds is equal to %d hours %d minutes and %d seconds.", inputSeconds, hours, minutes, seconds); //print output
  
  return 0;
}