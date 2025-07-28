#include <stdio.h>        

void MultiplyArrayByTwo(int *arrPtr, int size);
int main()
{
   int Numbers[] = {1, 2, 3, 4, 5};
   int size = sizeof(Numbers)/sizeof(Numbers[0]);
   
   printf("The Original: ");
   for (int i = 0; i < size; i++)
   {
       printf(" %d", Numbers[i]);
   }
   printf("\n");
   
   MultiplyArrayByTwo(Numbers, size);
   
   printf("The Mod: ");
   for (int i = 0; i < size; i++)
   {
      printf(" %d", Numbers[i]); 
   }
   printf("\n");
   return 0;
}
   
void MultiplyArrayByTwo(int *arrPtr, int size)
{
    for (int i = 0; i < size; i++)
    {
       *(arrPtr + i) *= 2;
    }
}                  
        