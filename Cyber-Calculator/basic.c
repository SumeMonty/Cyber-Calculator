#include<stdio.h>    
#include<conio.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>

void main()
{
        int i;
        int a, b;

        while(1)
        {
                printf("Enter The Number Of The Option You Want To Choose\n\n");
                printf("1.Addition Of Two Integers\n");
                printf("2.Subtraction Between Two Integers\n");
                printf("3.Multiplication Between Two Integers\n");
                printf("4.Division Of Two Integers\n\n");
                printf("5.Exit ");
                scanf("%d", &i);
                system("CLS");


                switch(i)
                {

                        case 1:
                                printf("Enter two numbers: ");
                                scanf("%d%d", &a, &b);
                                printf("\nSum Of %d And %d = %d\n", a, b, (a+b));
                                break;
                        case 2:
                                printf("Enter two numbers: ");
                                scanf("%d%d", &a, &b);
                                printf("\nDifference Between %d And %d = %d\n", a, b, (a-b));
                                break;
                        case 3:
                                printf("Enter two numbers: ");
                                scanf("%d%d", &a, &b);
                                printf("\nProduct Of %d And %d = %d\n", a, b, (a*b));
                                break;
                        case 4:
                                printf("Enter two numbers: (Dividend   Divisor)");
                                scanf("%d%d", &a, &b);
                                printf("\nQuotient=%f\n", (float) a/b);
                                printf("\nRemainder=%d\n", (a%b));
                                break;

                        case 5:
                                exit(0);        

                        default:
                                MessageBox(0,"Please Choose A Valid Option","Error",1);
                                system("basic");
                }
        }

 

        getch();
}
