//C program to find the Simple Interest for a given principal, rate and time.

#include<stdio.h>

int main()
{
  int P;
  float T,R;        //P=Principal, T=Time, R=Rate.
  float SI;           //SI=Simple_Interest.

  printf("Enter principal value:");
  scanf("%d", &P);  
  printf("Enter Time period");
  scanf("%f", &T);
  printf("Enter rate of interest");
  scanf("%f", &R);

  SI=(P*T*R)/100;

  printf("Simple_Interest=%f", SI);

  return 0;
}
