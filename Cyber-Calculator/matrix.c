#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int matrix1[3][3]; //first matrix
    int matrix2[3][3]; //second matrix
    int matrix3[3][3]; //matrix addition
    int i;             //i=rows
    int j;             //columns
    int choice;
    int scalar;

    system("title Cyber-Calculator_Matrix");
    
    while (1)
    {
        printf("Enter The Number Of The Option You Want To Choose\n\n");
        printf("1.Matrix Addition and Subtraction\n\n");
        printf("2.Scalar Multiplication On A Matrix\n\n");
        printf("3.Exit ");
        scanf("%d", &choice);
        system("cls");

        if (choice == 3)
        {
            exit(0);
        }
        /*******************First Matrix************************/
        printf("Matrix 1....\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("Enter the value of a[%d%d] ", i + 1, j + 1);
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("Matrix 1 is:-\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {

                printf("%d\t", matrix1[i][j]);
            }
            printf("\n\n");
        }

        if (choice == 1)
        {
            /**********************Second Matrix********************/
            printf("\n");
            printf("Matrix 2....\n");
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("Enter the value of a[%d%d] ", i + 1, j + 1);
                    scanf("%d", &matrix2[i][j]);
                }
            }

            printf("\nMatrix 2 is:-\n");
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {

                    printf("%d\t", matrix2[i][j]);
                }
                printf("\n\n");
            }

            /******************Calculated Matrix***********************/
            printf("\nAddition Of The Two Matrices Is\n");
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
                }
            }

            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("%d\t", matrix3[i][j]);
                }
                printf("\n\n");
            }

            printf("\n Subtraction Of The Two Matrices Is\n");
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
                }
            }

            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("%d\t", matrix3[i][j]);
                }
                printf("\n\n");
            }
        }

        if (choice == 2)
        {
            printf("Enter The Number To Be Multiplied ");
            scanf("%d", &scalar);

            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    matrix3[i][j] = scalar * matrix1[i][j];
                }
            }

            printf("\nThe Result Is:-\n");
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("%d\t", matrix3[i][j]);
                }
                printf("\n\n");
            }
        }
        printf("\n\n");
    }
}