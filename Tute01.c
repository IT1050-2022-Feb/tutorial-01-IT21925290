/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int mark1, mark2,total;
	float average;

  //ENTER FIRST mark1
  printf("Please Enter the Subject 1 :");
  scanf("%d", &mark1);

  //Enter second mark
	printf("Please enter the Subject 2 :");
	scanf("%d", &mark2);

  //Calculate the total
	total = mark1+mark2;

  //Calculate the average
	average = total/2;

  //Print the average
  printf("Average marks : %.1f", average);
  
  return 0;
}//end of main function

