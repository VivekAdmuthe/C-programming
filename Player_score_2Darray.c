// C program to store temperature of two cities of a week and display it.
#include <stdio.h>
const int score = 7;
const int player = 2;
int main()
{
  int performance[player][score];

  // Using nested loop to store values in a 2d array
  for (int i = 0; i < player; ++i)
  {
    for (int j = 0; j < score; ++j)
    {
      printf("player %d, score %d : ", i + 1, j + 1);
      scanf("%d", &performance[i][j]);
    }
  }
  printf("\nDisplaying scores of past 7 matches of two players  : \n\n");

  // Using nested loop to display vlues of a 2d array
  for (int i = 0; i < player; ++i)
  {
    for (int j = 0; j < score; ++j)
    {
      printf("player %d, score %d = %d\n", i + 1, j + 1, performance[i][j]);
    }
  }
  return 0;
}
