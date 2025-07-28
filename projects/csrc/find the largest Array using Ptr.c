#include <stdio.h>

int *FindlargestElementPointer(int *arrPtr, int size);
int main()
{
    int Number[] = { 12, 24, 65, 34, 45, 223};
    int size = sizeof(Number)/ sizeof(Number[0]);
     
    printf("The intial array: ");
    for (int i = 0; i < size; i++)
    {
       printf("%d ", Number[i]);
    }
    printf("\n");
    
    int *LargestPtr = FindlargestElementPointer(Number, size);
    
    if ( LargestPtr != NULL)
    {
        printf("The largest element in the array is: %d\n", *LargestPtr);
        printf("The address is: %p\n", (void*)(LargestPtr));
    
        for (int i = 0; i < size; i++)
        {
           if (&Number[i] == LargestPtr)
           {
              printf("The original index was: %d\n", i);
              break;
           }      
        }
    }
    else 
    {
       printf("Error: the Array is empty!!!"); 
    }    
    return 0;
}
   
int *FindlargestElementPointer(int *arrPtr, int size)
{
     if (size <= 0)
     {
        return NULL;
     }
     
     int *CurrentElementPtr = arrPtr;
     for (int i = 0; i < size; i++)
     {
         if (*(arrPtr + i) > *CurrentElementPtr)
         {
             CurrentElementPtr = (arrPtr + i);
         }
     }
     
     return CurrentElementPtr;        
}                 