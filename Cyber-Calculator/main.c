
#include<stdio.h>                                               //π   
#include<conio.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>

int main()
{ 
 

   int i;
   char enter;

   printf(
" .d8888b.           888                             .d8888b.           888                   888          888\n"
"d88P  Y88b          888                            d88P  Y88b          888                   888          888\n"
"888    888          888                            888    888          888                   888          888\n"
"888        888  888 88888b.   .d88b.  888d888      888         8888b.  888  .d8888b 888  888 888  8888b.  888888 .d88b.  888d888\n"
"888        888  888 888 '88b d8P  Y8b 888P'        888            '88b 888 d88P'    888  888 888     '88b 888   d88''88b 888P'\n"
"888    888 888  888 888  888 88888888 888          888    888 .d888888 888 888      888  888 888 .d888888 888   888  888 888\n"
"Y88b  d88P Y88b 888 888 d88P Y8b.     888          Y88b  d88P 888  888 888 Y88b.    Y88b 888 888 888  888 Y88b. Y88..88P 888\n"
" 'Y8888P'   'Y88888 88888P'   'Y8888  888           'Y8888P'  'Y888888 888  'Y8888P  'Y88888 888 'Y888888  'Y888 'Y88P'  888\n"
 "               888\n"                                                                                                              
 "          Y8b d88P\n"                                                                                                              
 "           'Y88P'\n\n"     
"Developer: Sumesh Mohanty\n\n"                                                                                                          
   );
    
   printf("Press any key to continue ");
   scanf("%c", &enter);
   system("CLS");

   while(1)
   {
      printf("Select A Type Of Calculator\n\n");
      printf("Choose A Number From The Following[Enter 0 To Exit]\n\n");

      printf("1.Basic Calculator\n\n");

      printf("2.Scientific Calculator\n\n");

      printf("3.Matrix Calculator\n\n");

      printf("4.Table Calculator\n\n");

      printf("5.Financial Calculator\n\n");

      printf("6.Factorial Calculator ");

      scanf("%d", &i);
      
      if(i==0)
      {
         exit(0);
      }
      
      if(i==1)
      {                           //Basic Calculator
         system("CLS");
         system("gcc basic.c -o basic && basic");
      }


      else if(i==2)
      {                           //Scientific Calculator.
         system("CLS");
         system("gcc scientific.c -o scientific && scientific");
      }

      else if(i==3)
      {                           //Matrix Calculator        
         system("CLS");
         system("gcc matrix.c -o matrix && matrix");
      }

      else if(i==4)
      {
         system("CLS");
         system("gcc table.c -o table && table");
      }

      else if(i==5)
      {
         system("CLS");
         system("gcc financial.c -o financial && financial");
      }

      else if(i==6)
      {
         system("CLS");
         system("gcc factorial.c -o factorial && factorial");
      }

      else
      {
         system("CLS");
         MessageBox(0,"Incorrect Choice\nStarting Again...!!!!","Error",1);
         
      }
  
   }

   return 0;
}
