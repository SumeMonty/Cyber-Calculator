#include<stdio.h>    
#include<conio.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#define pi 22/7

void main()
{
        int j;
        float a;
        float x;
        double b;
        double base, power;
        double result;
        char repeat;

        do
        {
                printf("Enter The Number Of The Option You Want To Choose\n\n");
                printf("1.Finding The Square Of An Number\n\n");
                printf("2.Finding The Square Root Of A Number\n\n");
                printf("3.Finding The Cube Of An Number\n\n");
                printf("4.Finding The Natural Log Of A Number(Base = 'e')\n\n");
                printf("5.Finding The Common Log Of A Number(Base = '10')\n\n");
                printf("6.Multiplication Of A Number 'x' With 'pi(22/7)'....'x*(22/7)'\n\n");
                printf("7.Division Of A Number 'x' By 'pi(22/7)'....'x/(22/7)'\n\n");
                printf("8.Find The Value Of A Number Raised To The Power Of Another ");
                scanf("%d", &j);

                switch(j)
                {

                        case 1:
                                printf("Enter The Number To Be Squared: ");
                                scanf("%f", &a);
                                printf("The Square Of %.2f = %f\n\n", a, (a*a));
                                break;

                        case 2:
                                printf("Enter The Number To Find The Square Root: ");
                                scanf("%lf", &b);
                                result = sqrt(b);
                                printf("The Square Root Of %.2lf = %lf\n\n", b, result);
                                break;

                        case 3:
                                printf("Enter The Number To Be Cubed: ");
                                scanf("%f", &a);
                                printf("The Cube Of %.2f = %f\n\n", a, (a*a*a));
                                break;

                        case 4:
                                printf("Enter The Number 'b'(log b): ");
                                scanf("%lf", &b);
                                result = log(b);
                                printf("The Natural Log Of %.2lf = %lf\n\n", b, result);
                                break;

                        case 5:
                                printf("Enter The Number 'b'(log b): ");
                                scanf("%lf", &b);
                                result = log10(b);
                                printf("The Common Log Of %.2lf = %lf\n\n", b, result);
                                break;

                        case 6:
                                printf("Enter The Number 'x' To Be Multiplied With 'π': ");
                                scanf("%f", &x);
                                printf("The Value Of (%.2f * 22/7) = %f", x, (x*pi));
                                break;

                        case 7:
                                printf("Enter The Number 'x' To Be Divided By '22/7': ");
                                scanf("%f", &x);
                                printf("The Value Of (%.2f / (22/7)) = %f", x, (x/pi));
                                break;

                        case 8:
                                printf("Enter The Value Of Base: ");
                                scanf("%lf", &base);
                                printf("Enter The Value Of Power: ");
                                scanf("%lf", &power);
                                result = pow(base,power);
                                printf("The Value Of %.2lf Raised To To The Power Of %.2lf = %.2lf", base, power, result);
                                break;

                        default:
                                MessageBox(0,"Please Enter A Valid Option","Error",1);
                                system("scientific");
                }

               printf("Wanna Use Scientific Calculator Again?? (Y/N) ");
               scanf("%c", &repeat); 

        }while(repeat=='y');


     getch();
}