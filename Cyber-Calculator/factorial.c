#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	int i, fact;

	system("title Cyber-Calculator_Factorial");
	
	printf("Enter the value of N: Enter [0] To Exit         //N = Number to find Factorial of\n");
	scanf("%d", &N);

	if (N == 0)
	{
		system("cls");
		exit(0);
	}

	fact = 1;

	for (i = 1; i <= N; i++)
	{
		fact = fact * i;
	}
	printf("Factorial of %d is %d\n\n", N, fact);
	printf("\n\n");
	system("./factorial");
	return 0;
}