#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

int main()
{
    void decimal();
    void binary();
    int i;

    system("cls");
    system("title Cyber-Calculator_Binary");
    printf("Select A Converter[Enter '0' To Exit]\n\n");
    printf("1.Decimal To Binary Converter\n\n");
    printf("2.Binary To Decimal Converter ");
    scanf("%d", &i);

    if (i == 0)
    {
        printf("Terminating....\n");
        system("main");
    }

    if (i == 1)
    {
        decimal();
    }
    else if (i == 2)
    {
        binary();
    }
    else
    {
        MessageBox(0, "Invalid Input..Please Try Again", "Error", 1);
        system("cls && binary");
    }
    return 0;
}

void decimal()
{

    int decimal, quotient, binary;
    int remainder, position = 1;

    binary = 0;
    quotient = 0;
    printf("\n\n");
    printf("Enter any decimal number ");
    scanf("%d", &decimal);

    quotient = decimal;

    while (quotient > 0)
    {
        remainder = quotient % 2;

        binary = (remainder * position) + binary;

        quotient /= 2;

        position *= 10;
    }

    printf("Binary Form Of %d = %d\n", decimal, binary);
    getch();
    main();
}

void binary()
{
    int binary, decimal = 0;
    int j = 0;
    const double base = 2;

    printf("\n\n");
    printf("Enter Binary Number");
    scanf("%d", &binary);

    while (binary != 0)
    {
        if (binary % 10 == 1)
        {
            decimal += pow(base, j);
        }

        j++;
        binary /= 10;
    }

    printf("Decimal is %d", decimal);
    getch();
    main();
}