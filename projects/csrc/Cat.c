// this program askes the user how many times the cat should say meow
#include <stdio.h>

int main()
{
	int n; // n times
	// prompt the user enter the n times
	printf("How many times you want the cat to meow: ");
	scanf("%d", &n);
	
	if (n <= 0) // handles the case where the usser enters a negative n times
	{
		printf("Invalid number of times!");
		return 1; // indicate this as an error
	}
	else 
	{
		for (int i = 0; i < n; i++)
		{
			printf("meow\n", i);
		}
	}
	return 0;
}				