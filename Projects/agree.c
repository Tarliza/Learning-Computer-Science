// this program  checks if the user agrees or not
#include <stdio.h>

int main()
{
	char c; //where Y & y is Yes and N & n is no
	
	printf("Do you agree?(yes or no): "); // prompt the user a choice
	scanf("%c", &c); //read and store
	
	// create conditions
	if (c == 'Y' || c == 'y')
	{
		printf("Agreed\n");
	}
	else if (c == 'N' || c == 'n')
	{
		printf("Not agreed\n");
	}
	else 
	{
		printf("Invalid response!\n");
		return 1; // this indicates an error
	}
	return 0;
}				