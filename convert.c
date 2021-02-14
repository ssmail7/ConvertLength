//**************************************************************
// Written by Steven Smail for COP3514
//
// convert.c (Project 1)
//
// This program displays a menu for converting length and
// calculates the result based on the user's choice. It supports
// miles, kilometers, inches, and centimeters.
//**************************************************************

#include <stdio.h>

int main(void)
{
  int conversion;
  double length1, length2;

  printf("Please select one of the following operations\n");
  printf("1 - Miles to Kilometers\n");
  printf("2 - Kilometers to Miles\n");
  printf("3 - Inches to Centimeters\n");
  printf("4 - Centimeters to Inches\n");
  scanf("%d", &conversion);

  switch (conversion)
  {
    case 1:  printf("Enter the number of miles:\n");
             scanf("%lf", &length1);
             length2 = length1 * 1.6093;
             printf("%.2f miles = %.2f kilometers\n", length1, length2);
             break;
    case 2:  printf("Enter the number of kilometers:\n");
             scanf("%lf", &length1);
             length2 = length1 * 0.6214;
             printf("%.2f kilometers = %.2f miles\n", length1, length2);
             break;
    case 3:  printf("Enter the number of inches:\n");
             scanf("%lf", &length1);
             length2 = length1 * 2.54;
             printf("%.2f inches = %.2f centimeters\n", length1, length2);
             break;
    case 4:  printf("Enter the number of centimeters:\n");
             scanf("%lf", &length1);
             length2 = length1 * 0.3937;
             printf("%.2f centimeters = %.2f inches\n", length1, length2);
             break;
    default: printf("Ouput: Invalid input, please select between 1 and 4\n");
             break;
  }

  return 0;
}