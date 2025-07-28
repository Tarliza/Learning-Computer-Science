#include <stdio.h>

int main()
{
    int n, m, a, exist;
    
    printf("   welcome to the periodic table\n\n");
    printf("> press 1 To know about an element\n");
    printf("> press 7 TO close the periodic table\n");
    
    printf("Enter: ");
    scanf("%i", &n);
    
    if ( n == 1 )
    {
         printf("> Press 2 Search the the element by it's atomic number\n");
         printf("Enter: ");
         scanf("%i", &m);
         
         if ( m == 2
          )
         {
             printf("Enter the atomic number: ");
             scanf("%i", &a);
             
             if ( a == 1 )
             {
                 printf("Name : Hydrogen\n");
                 printf("Symbol : H\n");
                 printf("Atomic Number : 1\n");
                 printf("Electronic Coonfiguration : 1s^1\n");
                 printf("Discovered by : Henry Cavendish\n");
                 printf("Charge : +1\n");
             }
        }
    }
    else if ( n == 7 )
    {
       printf("Are you sure you want to close the periodic table? (yes/no)\n");
       printf("> press 5 for yes\n");
       printf("> press 6 for no\n");
       
       printf("Enter: ");
       scanf("%i", &m);
       
       if ( m == 5 )
       {
            printf("Are you sure?\n");
            printf("> press 3 for yes\n");
            printf("> press 4 for No\n");
            printf("Enter: ");
            scanf("%i", &n);
            
            if ( n == 3 )
            {
                printf("Periodic table has closed\n");
            }
            else if ( n == 4 )
            {
                  printf("The Periodic table hasn't closed and you can continue to learn more about elements\n");
                  printf("Enter the Atomic number: ");
                  scanf("%i", &a);
                  
                  if ( a == 1 )
                  {
                        printf("Name : Hydrogen\n");
                        printf("Symbol : H\n");
                        printf("Atomic Number : 1\n");
                        printf("Electronic Coonfiguration : 1s^1\n");
                        printf("Discovered by : Henry Cavendish\n");
                        printf("Charge : +1\n");
                  }
           }
       }
       else if ( m == 6 )
       {
             printf("The Periodic table hasn't closed and you can continue to learn more about elements\n");
             printf("Enter the Atomic number: ");
             scanf("%i", &a);
                  
             if ( a == 1 )
             {
                    printf("Name : Hydrogen\n");
                    printf("Symbol : H\n");
                    printf("Atomic Number : 1\n");
                    printf("Electronic Coonfiguration : 1s^1\n");
                    printf("Discovered by : Henry Cavendish\n");
                    printf("Charge : +1\n");
             }
       }      
    }   
     
     return 0;                     
}     