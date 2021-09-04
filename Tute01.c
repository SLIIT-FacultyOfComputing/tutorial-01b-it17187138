/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2;
  float avg;

  printf("Enter 1st subject marks:");
  scanf("%f",&mark1);

  printf("Enter 2nd subject marks:");
  scanf("%f",&mark2);

  avg=(mark1+mark2)/2;
  printf("average :%2.f",avg);
  
  return 0;
}

