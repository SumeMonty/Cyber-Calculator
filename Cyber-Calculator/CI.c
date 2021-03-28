//C program to find Compound Interest for a given principal, time and rate.

#include<stdio.h>
#include<math.h>

int main()
{
  float principal, time, rate, CI;

  printf("Enter principal value:");
  scanf("%f", &principal);
  printf("Enter time period:");
  scanf("%f", &time);
  printf("Enter rate of interest:");
  scanf("%f", &rate);

  CI=principal *(pow((1 + rate /100),time));

  printf("Compound_Interest = %f", CI);

  return 0;
}