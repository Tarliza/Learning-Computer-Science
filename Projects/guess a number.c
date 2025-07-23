#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
   srand(time(NULL));
   int secretenumber = (rand() % 100) + 1;
   int guess;
   
   printf("I am thinking of a number between 1 to 100\n");
   printf("Try to guess it!\n");
   
   do 
   {
      printf("enter a number: ");
      scanf("%d", &guess);
      
      if ( guess < secretenumber)
       {
         printf("Too low\n");
       }
      else if ( guess > secretenumber)
       {
         printf("Too high\n");
       }
      else
       { 
         printf("Correct!!!\n");
       }
   }
   while ( guess != secretenumber);
   
   return 0;
}       