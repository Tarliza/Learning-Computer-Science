#include <stdio.h>

int main(void)
{ 
   int number;
   printf("Enter any number: ");
   scanf("%d", &number);
   
   if (number % 2==0 )
   {
     printf("%d is an even number", number);
   }
   else 
   {
     printf("%d is an odd number", number);
   }
   printf("\n");
   return 0;
}     