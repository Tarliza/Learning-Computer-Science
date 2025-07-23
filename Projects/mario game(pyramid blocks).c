// this program builds right-aligned pyramid
#include <stdio.h>

int main(void)
{
	// Declear the variables you're going to use'
	int height;
	int space, hash, row;
	
	//prompt the user to enter a height of the pyramid
	printf("enter a height(1-10): ");
	scanf("%d", &height); //store and read input
	
	// what happens when the user enters a number that exceeds the range you gave them
	if (height < 1 || height > 10)
	{
		printf("height can only be between 1 & 10\n");
		return 1; //indicate an error
	}
	// tell the computer how to build your pyramid
	for (row = 1; row <= height; row++)
	{
		for (space = 1; space <= height - row; space++)
		{
			printf(" ", space);
		}
		for ( hash = 1; hash <= row; hash++)
		{
			printf("#", hash);
		}
		printf("\n"); //each happens on its line
	}
	
	return 0;
}