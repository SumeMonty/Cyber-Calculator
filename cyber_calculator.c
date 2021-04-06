#include<stdio.h>                                               //π
#include<conio.h>
#include<math.h>
#include<windows.h>
#define pi 22/7

int main()
{
    void basic();
    void scientific();
    void matrix();
    int i;
    char enter;
    printf("Coded By Sumesh Mohanty\n\n");
    printf("...Welcome To Cyber-Calculator\n");
    printf("Press any key to continue");
    scanf("%c", &enter);
    printf("\n");

    printf("Select A Type Of Calculator:-\n");

    printf("1.Basic Calculator('+','-','*','/')\n\n");

    printf("2.Scientific Calculator\n\n");

    printf("3.Matrix Calculator\n\n");
    scanf("%d", &i);

    if(i==1)
    {                           //Basic Calculator
       basic();
    }


    if(i==2)
    {                                           //Scientific Calculator.
       scientific();
    }

    if(i==3)
    {
       matrix();
    }

    getch();
}


/***********************************************************************************************************************************************************/


void basic()
{
        int j;
        int a, b;

        printf("1.Addition Of Two Integers\n");
        printf("2.Subtraction Between Two Integers\n");
        printf("3.Multiplication Between Two Integers\n");
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
                        printf("\nQuotient=%f\n", (float) a/b);
                        printf("\nRemainder=%d\n", (a%b));
                        break;

                default:
                        MessageBox(0,"Please Choose A Valid Option","Error",1);
                        basic();
        }
}


/***********************************************************************************************************************************************************/


void scientific()
{
        int j;
        float a;
        float x;
        double b;
        double base, power;
        double result;


        printf("1.Finding The Square Of An Number\n\n");
        printf("2.Finding The Square Root Of A Number\n\n");
        printf("3.Finding The Cube Of An Number\n\n");
        printf("4.Finding The Natural Log Of A Number(Base = 'e')\n\n");
        printf("5.Finding The Common Log Of A Number(Base = '10')\n\n");
        printf("6.Multiplication Of A Number 'x' With 'pi(π)'....'x*π'\n\n");
        printf("7.Division Of A Number 'x' By 'pi(π)'....'x/π'\n\n");
        printf("8.Find The Value Of A Number Raised To The Power Of Another\n\n");
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
                        printf("Enter The Number 'x' To Be Multiplied With 'π'\n");
                        scanf("%f", &x);
                        printf("The Value Of (%.2f * π) = %f", x, (x*pi));
                        break;

                case 7:
                        printf("Enter The Number 'x' To Be Divided By 'π'\n");
                        scanf("%f", &x);
                        printf("The Value Of (%.2f / π) = %f", x, (x/pi));
                        break;

                case 8:
                        printf("Enter The Value Of Base\n");
                        scanf("%lf", &base);
                        printf("Enter The Value Of Power\n");
                        scanf("%lf", &power);
                        result = pow(base,power);
                        printf("The Value Of %.2lf Raised To To The Power Of %.2lf = %.2lf", base, power, result);
                        break;

                default:
                        MessageBox(0,"Please Enter A Valid Option","Error",1);
                        scientific();
        }
}

/*******************************************************************************************************************************************/

void matrix()
{
    int matrix1[3][3];      //first matrix
    int matrix2[3][3];      //second matrix
    int matrix3[3][3];      //matrix addition
    int i;             //i=rows
    int j;             //columns

    /*******************First Matrix************************/

    printf("First Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the value of a[%d%d]\n", i+1,j+1);
            scanf("%d", &matrix1[i][j]);

        }
    }

    printf("First matrix is:-\n");


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }


    /**********************Second Matrix********************/

    printf("\n");
    printf("Second Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the value of a[%d%d]\n", i+1,j+1);
            scanf("%d", &matrix2[i][j]);

        }
    }

    printf("Second matrix is:-\n");


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    /******************Calculated Matrix***********************/




    printf("Addition Of The Two Matrices Is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
} 
