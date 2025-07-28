#include <stdio.h>

struct Person { char name[50]; int age; };

int main() 
{
  struct Person person1;

  // store string input in person1.name
  printf("Enter name: ");
  fgets(person1.name, sizeof(person1.name), stdin);

  // store int input in person1.age
  printf("Enter age: ");
  scanf("%d", &person1.age);

  printf("Name: %s", person1.name);
  printf("Age: %d", person1.age);

  return 0;
}