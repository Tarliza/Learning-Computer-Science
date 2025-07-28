#include <stdio.h>

int main() 
{
    int choice;
    double num1, num2, result; // For calculations

    do 
    {
        // 1. Display the menu options here using printf statements
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exist\n");
        // 2. Get the user's choice using scanf
        printf("Enter your choice(1 - 5): ");
        scanf("%d", &choice);
        // 3. Use a switch statement to handle the choice
        switch (choice) 
        {
            case 1: // Addition
                // Get two numbers
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                // Calculate and print the sum
                result = num1 + num2;
                printf("The Sum = %.lf\n", result);
                break;
            case 2: // Subtraction
                // Get two numbers
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                // Calculate and print the difference
                result = num1 - num2;
                printf("Difference = %.lf\n", result);
                break;
            case 3: // Multiplication
                // Get two numbers
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                // Calculate and print the product
                result = num1 * num2;
                printf("Product = %.2lf\n", result);
                break;
            case 4: // Division
                // Get two numbers
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                // Calculate and print the quotient (handle division by zero)
                if ( num2 != 0)
                {
                  result = num1 / num2;
                  printf("Quotient = %.2lf\n", result);
                }
                else 
                {
                   printf("can't divide by zero!!\n");
                   return 1;
                }     
                break;
            case 5: // Exit
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5); // Continue looping until choice is 5

    return 0;
}