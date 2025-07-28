#include <stdio.h>

int main()
{
   char board[3][3] = {{ '1', '2', '3' }, { '4', '5', '6' }, { '7', '8', '9'}};
   char player = 'X';
   
   while (1)
   {
      printf(" %c | %c | %c \n", board[0][0], board[0][1],board[0][2]);
      printf("___+___+___\n");
      printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
      printf("___+___+___\n");
      printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
   
      int move;
      printf("Enter a move(1-9): ");
      scanf("%i", &move);
   
     if (move == 1) board[0][0] = player;
     else if (move == 2) board[0][1] = player;
     else if (move == 3) board[0][2] = player;
     else if (move == 4) board[1][0] = player;
     else if (move == 5) board[1][1] = player;
     else if (move == 6) board[1][2] = player;
     else if (move == 7) board[2][0] = player;
     else if (move == 8) board[2][1] = player;
     else if (move == 9) board[2][2] = player;
     
     player = ( player == 'X') ? '0': 'X';
     
   }   
   return 0;
}   