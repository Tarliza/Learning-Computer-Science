// This program calculates the minimum number of coins required to give a user a certain amount of change
#include <math.h>
#include <stdio.h>

#define quarter 25
#define dime 10
#define nikel 5
#define penny 1

// The calucaltion
int main(void)
{
	// Declare alll variables to be used
	double change;
	int coin = 0, cents;
	
	// prompt the uer dor amount of change
	printf("Enter the amount of change: ");
	scanf("%lf",&change);
     
   //it should be a postive number
   if (change < 0)
   {
   	printf("your change cannot be a negative!");
   	return 1;
   }
   //round off 
   cents = (int) round(change * 100);
   
   while (cents >= quarter)
   {
   	cents -= quarter;
   	coin++;
   }
   while (cents >= dime)
   {
   	cents -= dime;
   	coin++;
   }
   while (cents >= nikel)
   {
   	cents -= nikel;
   	coin++;
   }
   while (cents >= penny)
   {
   	cents -= penny;
   	coin++;
   }
   printf("The total numer of coins is %d\n", coin);
   return 0;
}	
   