#include<stdio.h>                                               //π
#include<conio.h>
#include<math.h>
#define pi 22/7

int main()
{
    int i;
    printf("Select A Type Of Calculator:-\n");

    printf("1.Basic Calculator('+','-','*','/')\n\n");

    printf("2.Scientific Calculator\n\n");
    scanf("%d", &i);

    if(i==1)
    {                           //Basic Calculator
        int j;
        int a, b;

        printf("1.Addition Of Two Integers\n");
        printf("2.Subtraction Between Two Integers\n");
        printf("3.Multiplicaion Between Two Integers\n");
        printf("4.Division Of Two Integers\n");
        scanf("%d", &j);
        printf("\n\n");

        switch(j)
        {

            case 1:
                    printf("Enter two numbers:\n");
                    scanf("%d%d", &a, &b);
                    printf("\nSum Of %d And %d = %d\n", a, b, (a+b));
                    break;
            case 2:
                    printf("Enter two numbers:\n");
                    scanf("%d%d", &a, &b);
                    printf("\nDifference Between %d And %d = %d\n", a, b, (a-b));
                    break;
            case 3:
                    printf("Enter two numbers:\n");
                    scanf("%d%d", &a, &b);
                    printf("\nProduct Of %d And %d = %d\n", a, b, (a*b));
                    break;
            case 4:
                    printf("Enter two numbers:\n");
                    scanf("%d%d", &a, &b);
                    printf("\nQuotient=%d\n", (a/b));
                    printf("\nRemainder=%d\n", (a%b));  
        }                          
    }


    if(i==2)
    {                                           //Scientific Calculator.
        int j;
        float a;
        float x;
        double b;
        double result;


        printf("1.Finding The Square Of An Number\n\n");
        printf("2.Finding The Square Root Of A Number\n\n");
        printf("3.Finding The Cube Of An Number\n\n");
        printf("4.Finding The Natural Log Of A Number(Base = 'e')\n\n");
        printf("5.Finding The Common Log Of A Number(Base = '10')\n\n");
        printf("6.Multiplication Of A Number 'x' With 'pi(π)'....'x*π'\n\n");
        printf("7.Division Of A Number 'x' By 'pi(π)'....'x/π'\n\n");
        scanf("%d", &j);

        switch(j)
        {

                case 1:
                        printf("Enter The Number To Be Squared:\n");
                        scanf("%f", &a);
                        printf("The Square Of %.2f = %f\n\n", a, (a*a));        
                        break;

                case 2:
                        printf("Enter The Number To Find The Square Root:\n");
                        scanf("%lf", &b);
                        result = sqrt(b);
                        printf("The Square Root Of %.2lf = %lf\n\n", b, result);
                        break;

                case 3:
                        printf("Enter The Number To Be Cubed:\n");
                        scanf("%f", &a);
                        printf("The Cube Of %.2f = %f\n\n", a, (a*a*a));        
                        break;

                case 4:
                        printf("Enter The Number 'b'(log b):\n");
                        scanf("%lf", &b);
                        result = log(b);
                        printf("The Natural Log Of %.2lf = %lf\n\n", b, result);        
                        break;

                case 5:        
                        printf("Enter The Number 'b'(log b):\n");
                        scanf("%lf", &b);
                        result = log10(b);
                        printf("The Common Log Of %.2lf = %lf\n\n", b, result);
                        break;

                case 6:
                        printf("Enter The Number 'x' To Be Multiplied With 'π'");
                        scanf("%f", &x);
                        printf("The Value Of (%.2f * π) = %f", x, (x*pi));
                        break;        

                case 7:
                        printf("Enter The Number 'x' To Be Divided By 'π'");
                        scanf("%f", &x);
                        printf("The Value Of (%.2f / π) = %f", x, (x/pi));        
                        
        }                       
                            
    }
    getch();
}