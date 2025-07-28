// this program will run as a calculator
#include <stdio.h>

// here we going to build our calculator(creation)
int main() 
{ 
// declare that they will be num1, num2 and an operator
    double num1, num2; //we use double to avoid having to round off
    char operation; // one mathematical sign will be used
    double result; // results will come out with a decimal

// prompt the user for numbers
    printf("Enter first number: ");
    scanf("%lf", &num1); // the input provided by the user gets processed and stored accordingly e.g &num1

    printf("Enter an operator (+, -, *, /): "); // what's stored in parenthesis is a hint for the user to know what to enter
    scanf(" %c", &operation); // Note the space before %c to consume potential leading whitespace

    printf("Enter second number: ");
    scanf("%lf", &num2);

// now we need to know what to do with the input the user has provided
// we will use switch instead of functions  like if, else if , because they will make our work untidy

    switch (operation) 
    { /* switch is usefull when you have more than one alternatives, in this case we have 4 cases because the user could enter any of the four operators (+, -, /, *).*/
    
        case '+': // case1 when the user enters '+' operator what must happen:
            result = num1 + num2;
            break; // the loop gets terminated
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/': // what happens when thee user puts the denomitor to be 0 
            if (num2 != 0) // if the denomitor is not zero then give the user their answer
            {
                result = num1 / num2; // answer 
            }
             else // if the user happens to give the num2 = 0 then there will be an error 
              {
                printf("C'mon really now, you can't divide by zero!!!\n"); // tell the user what she did is wrong and why
                return 1; // return 1; will Indicate this as a error
              }      
            break;
            
        // the user may not enter any of the operators you hintted, that case becomes a default    
        default: // default says if any of the cases above do not happen then 
            printf("Error! Invalid operator.\n");
            return 1; // Indicate an error, these error occur only when user does not coparate with the operators given
    }

    // if the user coparates and enters vaild operators then produce results
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1,  operation,  num2,  result);

    return 0; // Indicate successful execution
}
