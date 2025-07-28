#include <stdio.h>

int main() 
{
    long long int card;
    printf("Card Number: ");
    scanf("%lld", &card);
    
    int sum = 0;
    int count = 0;
    long long int temp = card;
    // Count digits
    while (temp > 0) 
    {
        temp /= 10;
        count++;
    }
    temp = card;
    
    for (int i = count - 1; i >= 0; i--) 
    {
        int digit = temp % 10;
        temp /= 10;
        if ((count - 1 - i) % 2 == 0) 
        {
            sum += digit;
        } 
        else 
        {
            int product = digit * 2;
            if (product > 9) 
            {
                product -= 9;
            }
            sum += product;
        }
    }
    if (sum % 10 == 0) 
    {
        printf("Valid");
    } 
    else 
    {
        printf("Invalid");
    }
    return 0;
}