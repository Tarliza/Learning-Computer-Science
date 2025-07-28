#include <stdio.h>

int main(void)
{
  int sum = 0;
  int number[5] = {1, 2, 3, 4, 5};
  int i = 1;
  while (i != 5)
  {
    sum = sum + number[i];
    i++;
  }
  printf("The sum of elements is %d", sum);
  return 0;
}    
      
        