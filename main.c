/*
. Write a C program to input a temperature in Fahrenheit and convert it to Celsius
    Celsius = (Fahrenheit - 32) × 5 / 9

 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int Fahrenheit;
  printf("Enter Fahrenheit:");
  scanf("%d",&Fahrenheit);
  int Celsius=(Fahrenheit-32)*5/9;
  printf("Celsius=%d",Celsius);


    return 0;
}
