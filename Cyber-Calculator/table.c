//C program to print multiplication tables of a given number.

#include<stdio.h>

int main()
{
    int a;
    int i;
    char repeat;

    do
    {    
    printf("Enter a number:");
    scanf("%d", &a);

    for(i=1;i<=10;i++)
    {
        printf("\n%d x %d = %d", a,i,(a*i));
    }

    printf("Wanna Use Table Calculator Again?? (Y/N) ");
    scanf("%c", &repeat);
    
    }while(repeat=='y');
    
    
    return 0;
}
