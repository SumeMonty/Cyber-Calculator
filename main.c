#include <stdio.h> //π
#include <math.h>
#include <stdlib.h>
#include <windows.h>

int main()
{

   int i;
   char enter;

   system("cls");
   system("title Cyber-Calculator");

   printf(

       "  ____      _                  ____      _            _       _\n"
       " / ___|   _| |__   ___ _ __   / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __\n"
       "| |  | | | | '_ \\ / _ \\ '__| | |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n"
       "| |__| |_| | |_) |  __/ |    | |__| (_| | | (__| |_| | | (_| | || (_) | |\n"
       " \\____\\__, |_.__/ \\___|_|     \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|\n"
       "      |___/\n"
       "Developer: Sumesh Mohanty\n\n");

   printf("Press ENTER to continue ");
   scanf("%c", &enter);
   system("cls");

   while (1)
   {
      printf("Select A Type Of Calculator\n\n");
      printf("Choose A Number From The Following[Enter 0 To Exit]\n\n");

      printf("1.Basic Calculator\n\n");

      printf("2.Scientific Calculator\n\n");

      printf("3.Matrix Calculator\n\n");

      printf("4.Table Calculator\n\n");

      printf("5.Financial Calculator\n\n");

      printf("6.Factorial Calculator\n\n");

      printf("7.Binary Calculator ");

      scanf("%d", &i);

      if (i == 0)
      {
         printf("\n\n\nTHANK YOU FOR USING CYBER-CALCULATOR\n\n");
         exit(0);
      }

      if (i == 1)
      { //Basic Calculator
         system("cls");
         system("gcc basic.c -o basic && basic");
      }

      else if (i == 2)
      { //Scientific Calculator.
         system("cls");
         system("gcc scientific.c -o scientific -lm && scientific");
      }

      else if (i == 3)
      { //Matrix Calculator
         system("cls");
         system("gcc matrix.c -o matrix && matrix");
      }

      else if (i == 4)
      {
         system("cls");
         system("gcc table.c -o table && table");
      }

      else if (i == 5)
      {
         system("cls");
         system("gcc financial.c -o financial -lm && financial");
      }

      else if (i == 6)
      {
         system("cls");
         system("gcc factorial.c -o factorial && factorial");
      }

      else if (i == 7)
      {
         system("cls");
         system("gcc binary.c -o binary && binary");
      }


      else
      {
         system("cls");
         MessageBox(0, "Incorrect Choice\nStarting Again...!!!!", "Incorrect Choice", 1);
         system("./main");
      }
   }

   return 0;
}