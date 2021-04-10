#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    int i;
    char repeat;
    
    
    
    while(1)
    {    
        printf("\n\nEnter a number to print table: [Enter (0) to exit]\n");
        scanf("%d", &a);

        if (a==0)
        {
            exit(0);
        }
    

        for(i=1;i<=10;i++)
        {
            printf("\n%d x %d = %d", a,i,(a*i));
        }
    } 
    
    return 0;
}
