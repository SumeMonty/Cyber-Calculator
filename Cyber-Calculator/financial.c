#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

int main()
{
    int choice;
    int P;
    float T,R;        
    float SI;
    float CI;


    while(1)
    {
        printf("1. Simple Interest Calculator[Enter 0 To Exit]\n\n"
        "2. Compound Interest Calculator: ");
        scanf("%d", &choice);

        if(choice==0)
        {
        exit(0);
        }    

        switch(choice)
        {
            case 1:
                    printf("Enter Principal Value: ");
                    scanf("%d", &P);  
                    printf("Enter Time Period: ");
                    scanf("%f", &T);
                    printf("Enter Rate of Interest: ");
                    scanf("%f", &R);  
                    SI=(P*T*R)/100;
                    printf("Simple Interest = %f", SI);
                    break;

            case 2:
                    printf("Enter Principal Value: ");
                    scanf("%f", &P);
                    printf("Enter Time Period: ");
                    scanf("%f", &T);
                    printf("Enter Rate of Interest: ");
                    scanf("%f", &R);
                    CI=P *(pow((1 + R /100),T));
                    printf("Compound Interest = %f", CI);
                    break;     

            default:
                    MessageBox(0,"Please Choose A Valid Option","Error",1);
                    system("financial");
        }

        printf("\n\n\n\n");
    }

}
