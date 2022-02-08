/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  int n, sum = 0, count = 0;

  // Input the value for n
  printf("Input the number for n :");
  scanf("%d", &n);

  while (count <= n){
    sum = sum + count;
    count++;    
  }

  //Printing the sum of the numbers
  printf("Sum = %d", sum);

  return 0;
}

