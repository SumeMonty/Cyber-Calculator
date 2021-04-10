//C program to find factorial of a number
/*Factorial of a positive integer n is product of all values from n to 1. 
           For example, the factorial of 3 is (3 * 2 * 1 = 6)*/ 

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N;
	int i, fact;
	
	
		printf("Enter the value of N:");
		scanf("%d", &N);

		i=1;
		fact=1;
		
		while(i<=N)
		{
			fact=fact*i;
			i++;
		}
	
	
		printf("Factorial of %d is %d\n\n", N, fact);
	
	
	return 0;
}
