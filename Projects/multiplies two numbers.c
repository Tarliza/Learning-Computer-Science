//This program multiplies two numbers
#include <stdio.h>           

 int main(void)  //this is my body where the creation happens
 {
   // here you have to declare  variables 
   double number1, number2, product;
      
   //prompt the user for two numbers  
   printf("Enter two numbers: "); 
   scanf("%lf %lf", &number1, &number2); //storage 
  
    product = number1 * number2; // notice this 

  // then after receiving produce some results
   printf("Product: %.lf\n", product);
  
   return 0;
 }