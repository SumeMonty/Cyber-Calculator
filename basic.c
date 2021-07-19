#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
        int i;
        int a, b;

        system("title Cyber-Calculator_Basic");
        while (1)
        {
                printf("Enter The Number Of The Option You Want To Choose[Enter 0 To Exit]\n\n");
                printf("1.Addition Of Two Integers\n");
                printf("2.Subtraction Between Two Integers\n");
                printf("3.Multiplication Between Two Integers\n");
                printf("4.Division Of Two Integers ");
                scanf("%d", &i);
                system("cls");

                if (i == 0)
                {
                        exit(0);
                }

                switch (i)
                {

                case 1:
                        printf("Enter two numbers: ");
                        scanf("%d%d", &a, &b);
                        printf("\nSum Of %d And %d = %d\n", a, b, (a + b));
                        break;
                case 2:
                        printf("Enter two numbers: ");
                        scanf("%d%d", &a, &b);
                        printf("\nDifference Between %d And %d = %d\n", a, b, (a - b));
                        break;
                case 3:
                        printf("Enter two numbers: ");
                        scanf("%d%d", &a, &b);
                        printf("\nProduct Of %d And %d = %d\n", a, b, (a * b));
                        break;
                case 4:
                        printf("Enter two numbers: (Dividend   Divisor)");
                        scanf("%d%d", &a, &b);
                        printf("\nQuotient=%f\n", (float)a / b);
                        printf("\nRemainder=%d\n", (a % b));
                        break;

                default:
                        MessageBox(0, "Please Choose A Valid Option", "Incorrect Choice", 1);
                        system("./basic");
                }

                printf("\n\n\n\n");
        }
}