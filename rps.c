#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char *choices[] = {"rock", "paper", "scissors"};
  printf("rock paper scissors\n");
  printf("CHOOSE ONE OF THEM...PRESS 'Q' OR 'q' TO QUIT!!\n");
  char rps[15];
  scanf("%s",rps);
  char i;
  while (strcmp(rps,"Q") && strcmp(rps, "q"))
    {
      i = rand() % 3;
      if (strcmp(rps,choices[i]) == 0)
	printf("DRAW\n");
      else if (strcmp(rps,"rock") == 0 && strcmp(choices[i], "scissors") == 0)
	printf("WIN\n");
      else if (strcmp(rps,"rock") == 0 && strcmp(choices[i], "paper") == 0)
	printf("LOSE\n");
      else if (strcmp(rps,"scissors") == 0 && strcmp(choices[i], "paper") == 0)
	printf("WIN\n");
      else if (strcmp(rps,"scissors") == 0 && strcmp(choices[i], "rock") == 0)
	printf("LOSE\n");
      else if (strcmp(rps,"paper") == 0 && strcmp(choices[i], "scissors") == 0)
	printf("LOSE\n");
      else if (strcmp(rps,"paper") == 0 && strcmp(choices[i], "rock") == 0)
	printf("WIN\n");
      else
	printf("CHOOSE THE CORRECT OPTIONS\n");
      scanf("%s",rps);
    }
  printf("\nThanks for playing with us...WE would like you to see again!!!\n");


  return 0;
}
