#include <stdio.h>

int calculatesum(int arr[]);
int main()
{
     int numbers[5];
     for (int i = 0; i < 5; i++)
     {
        printf("Enter element[%d]: ", i +1);
        scanf("%d", &numbers[i]);
     }
     
     int totalsum = calculatesum(numbers);
     printf("The sum = %d\n", totalsum);
     
     return 0;   
}

int calculatesum(int arr[])
{
     int sum = 0;
     for ( int j = 0; j < 5; j++)
     {
         sum += arr[j];
     }
     return sum;
}         