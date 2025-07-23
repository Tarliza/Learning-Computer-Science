#include <stdio.h>
#include <stdlib.h>

int main()
{
  int choice, age, yearC, yearB, sum;
  
  do
  {
     printf("Hey what do you want me to do for you?\n");
     printf("1. Calculate your age\n");
     printf("2. Calculate what year it is based on your age\n");  
     printf("3. Calculate which year you were born\n");
     printf("4. Exit\n");
     
     printf("Enter a choice: ");
     if (scanf("%d", &choice) != 1)
     { 
      printf("Invalid input. please enter a number\n");
      while ( getchar() != '\n');
      choice = 0;
      continue;
     } 
        
     if ( choice == 1)
     {
         printf("What year is it? ");
         if (scanf("%d", &yearC) != 1)
         {
            printf("Invalid input. please enter a number\n");
            while ( getchar() != '\n');
            choice = 0;
            continue;
         }   
         printf("When were you born? ");
         scanf("%d", &yearB);
         
         sum = yearC - yearB;
         printf("Ohh, you are %d years old\n", sum);
     }
     else if ( choice == 2)
     {
         printf("How old are you? ");
         if (scanf("%d", &age) != 1)
         {
             printf("Invalid input. please enter a number\n");
             while ( getchar() != '\n');
             choice = 0;
             continue;
         }    
         printf("When were you born? ");
         scanf("%d", &yearB);
         
         sum = yearB + age;
         printf("It's %d\n", sum);
     }
     else if ( choice == 3)
     {
         printf("How old are you? ");
         if (scanf("%d", &age) != 1)
         {
             printf("Invalid input. please enter a number\n");
             while ( getchar() != '\n');
             choice = 0;
             continue;
         }    
         printf("What year is it? ");
         scanf("%d", &yearC);
         
         sum = yearC - age;
         printf("You were born in %d\n", sum);
     }        
     else if ( choice == 4)
     {
        printf("Goodbye!!!\n");
     }       
     else
     {
        printf("Invalid choice.\n");
     }
     printf("\n");
  }
  while ( choice != 4);  
  return 0;
}                  