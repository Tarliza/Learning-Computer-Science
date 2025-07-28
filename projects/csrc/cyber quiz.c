#include <stdio.h>

int main()
{
      int i;
      int ans1, ans2, ans3, ans4, ans5;
      int point1, point2, point3, point4, point5;
      int point01, point02, point03, point04, point05;
      int total1 = 0, total2 = 0, total3 = 0;
      
      printf("   welcome to the game\n\n");
      printf("> press 7 to start the game\n");
      printf("> press 0 to quit the game\n");
      
      scanf("%i", &i);
      
      if ( i == 7 )
      {
           printf("The game has started\n\n");
      }
      else if ( i == 0 )
      {
           printf("The game has ended\n\n");
      }
      else 
      {
           printf("Invalid choice!\n");
           return 1;
      }
      
      if ( i == 7 )
      {
           printf("~Which one is the first earch engine in internet?\n\n"); 
           printf("1) Google\n");
           printf("2) Archie\n");    
           printf("3) Wais\n");
           printf("4) Altavista\n");
           
           printf("Enter your answer: ");
           scanf("%i", &ans1);
           
           if ( ans1 == 2 )
           {
               printf("Correct Answer!\n");
               point1 = 5;
               total1 += 1;
               total3 += 5;
               printf("You have scored %i points\n\n", point1);
           }
           else 
           {
                printf("Wrong Answer!\n");
                point01 = 0;
                total2 += 1;
                printf("You have scored %i points\n\n", point01);
           }
           
           printf("~Which one is the first web browser invented in 1990?\n\n");
           printf("1) Internet explorer\n");
           printf("2) Mosaic\n");
           printf("3) Mozilla\n");
           printf("4) Nexus\n");
           
           printf("Enter your answer: ");
           scanf("%i", &ans2);
           
           if ( ans2 == 4 )
           {
               printf("Correct Answer!\n");
               point02 = 5;
               total1 += 1;
               total3 += 5;
               printf("You have scored %i points\n\n", point02);
           }
           else
           {
               printf("wrong Answer\n");
               point02 = 0;
               total2 += 1;
               printf("You have scored %i points\n\n", point02);
           }
           
           printf("~The first computer virus is known as?\n\n");    
           printf("1) Rabbit\n");
           printf("2) Creeper Virus\n");
           printf("3) ELK Cloner\n");
           printf("4) SCA Virus\n");
           
           printf("Enter your answer: ");
           scanf("%i", &ans3);
           
           if ( ans3 == 2 )
           {
                printf("Correct Answer!\n");
                point3 = 5;
                total1 += 1;
                total3 += 5;
                printf("You have scored %i points\n\n", point3);
           }
           else 
           {
                printf("Wrong Answer\n");
                point03 = 0;
                total2 += 1;
                printf("You have scored %i points\n\n", point03);
           }
           
           printf("~Firewall in Computer is used for?\n\n");
           printf("1) Security\n"); 
           printf("2) Data Transmission\n");
           printf("3) Monitoring\n");
           printf("4) Authentication\n");
           
           printf("Enter your Answer: ");
           scanf("%i", &ans4);
           
           if ( ans4 == 1 )
           {
                printf("Correct Answer\n");
                point4 = 5;
                total1 += 1;
                total3 += 5;
                printf("You have scored %i points\n\n", point4);
           }
           else
           {
                printf("Wrong answer!\n");
                point04 = 0;
                total2 += 1;
                printf("You have scored %i points\n\n", point04);
           }
           
           printf("~Which fthe following is not a database management software?\n\n");
           printf("1) MySQL\n");
           printf("2) Oracle\n");   
           printf("3) Cobal\n"); 
           printf("4) Sybase\n"); 
           
           printf("Enter your answer: ");
           scanf("%i", &ans5);
           
           if ( ans5 == 3 )
           {
                 printf("Correct Answer!\n");  
                 point5 = 5;
                 total1 += 1;
                 total3 += 5;
                 printf("You have scored %i points\n\n", point5); 
           }
           else
           {
               printf("wrong Answer!\n"); 
               point05 = 0;
               total2 += 1;
               printf("You have scored %i points\n\n", point05);
           }
      }
      
      printf("You have %i correct answers\n", total1);
      printf("You have %i wrong answers\n", total2);
      printf("Leaving you with a total score of %i/25\n\n", total3);
      
      return 0;        
}    