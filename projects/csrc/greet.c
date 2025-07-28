#include <stdio.h>
#include <stdlib.h>

char* greet( char *words);
int main(void)
{    
    // prompt the user their name
    char* Name;
    Name = (char*) malloc(4 * sizeof(char));
    printf("Hello, what's your name?\n");
    scanf("%s", Name);
    
    // call the greet function
    Name = greet(Name);
    
    // free memory
    free(Name);
    return 0; // return successful
}

char* greet(char *words)
{
    // do it's purpose
    char* name = words;
    printf("hello %s\n", name);
    
    return name;
}                    