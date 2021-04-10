#include<stdio.h>    
#include<conio.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>

void main()
{
    int matrix1[3][3];      //first matrix
    int matrix2[3][3];      //second matrix
    int matrix3[3][3];      //matrix addition
    int i;             //i=rows
    int j;             //columns
    int choice;
    int scalar;
 
    while(1)
    {
        printf("Enter The Number Of The Option You Want To Choose\n\n");
        printf("1.Matrix Addition and Subtraction\n\n");
        printf("2.Scalar Multiplication On A Matrix\n\n");
        printf("3.Exit ");
        scanf("%d", &choice);
        system("CLS");
        
        if (choice==3)
        {
            exit(0);
        }
            /*******************First Matrix************************/           
            printf("Matrix 1....\n");
                for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    {
                        printf("Enter the value of a[%d%d] ", i+1,j+1);
                        scanf("%d", &matrix1[i][j]);
                    }
                }
                printf("Matrix 1 is:-\n");
                for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    {

                        printf("%d ", matrix1[i][j]);
                    }
                    printf("\n");
                }

                if(choice==1)
                {
                    /**********************Second Matrix********************/
                    printf("\n");
                    printf("Matrix 2....\n");
                    for(i=0;i<3;i++)
                    {
                        for(j=0;j<3;j++)
                        {
                            printf("Enter the value of a[%d%d] ", i+1,j+1);
                            scanf("%d", &matrix2[i][j]);
                        }
                    }

                    printf("Matrix 2 is:-\n");


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

                    printf("Subtraction Of The Two Matrices Is\n");
                    for(i=0;i<3;i++)
                    {
                        for(j=0;j<3;j++)
                        {
                            matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
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


            if(choice==2)
            {
                printf("Enter The Numbner To Be Multiplied ");
                scanf("%d", &scalar);
                printf("Addition Of The Two Matrices Is\n");
                for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    {
                        matrix3[i][j] = scalar*matrix1[i][j];
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

            

            printf("\n\n");
                        
    }        

    getch();
}
