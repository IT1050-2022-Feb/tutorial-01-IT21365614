/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  float total, avg;
  printf("Enter the mark of first subject : ");
  scanf("%d", &mark1);
  printf("Enter the mark of second subject : ");
  scanf("%d", &mark2);
  total = mark1 + mark2;
  avg = total / 2;
  printf("The average is : %.2f", avg);
  return 0;
}

