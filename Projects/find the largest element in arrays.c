#include <stdio.h>

int main(void)
{
  int arr[5] = {12, 3, 44, 23, 2};
  
  for (int i = 0; i < 5; i++)
  {
    if ( arr[0] < arr[i])
    {
      arr[0] = arr[i];
    }
  }
  printf("the largest number is %d", arr[0]);
  return 0;
}
 