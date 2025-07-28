#include <stdio.h>

int main()
{
   int sum_Odd = 0,sum_Even = 0,numbers;
   
   printf("Enter 10 numbers: \n");
   for ( int i = 0; i < 10; i++)
   {
     printf("Enter the %d: ", i + 1);
     scanf("%d", &numbers);
   
     if (numbers % 2 == 0)
       {
         sum_Even += numbers;
       }
     else
       {
         sum_Odd += numbers;
       }
   }
   printf(" Sum of Even = %d\n", sum_Even);
   printf(" Sum of Odd = %d\n", sum_Odd);
   
   return 0;
}              