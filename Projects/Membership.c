#include <stdio.h>

int main()
{     
    int age;   
    char membership;  
    float purchase;
    
    // prompt the user for their age to validate wherether they qualify
    printf("Enter your age: ");
    scanf("%i", &age);
    
    if ( age >= 18 ) // the user qualifies
    {
         printf("How much are you going to purchase: ");
         scanf("%f", &purchase);
         printf("What is your membership type: "); // to know what discount the user gets
         scanf(" %c", &membership); // stores the first letter
         
         if ( membership == 'p' || membership == 'P' )
         {
            float discount = purchase * 0.20;
            purchase -= discount;
             printf("Your discount will be %.2f\n", discount);
             printf("your new price will be %.2f", purchase);
         }
         else if ( membership == 's' || membership == 'S' )
         {
              float discount = purchase * 0.10;
              purchase -= discount;
              printf("your discount will be %.2f\n", discount);
              printf("Your new priice will be %.2f", purchase);
         }
         else
         {
              printf("You get no discount");
         }
         printf("\n");
    }
    else 
    {
         printf("Customers must be 18 or older to qualify for discounts\n");
    }
    
    return 0;
}    