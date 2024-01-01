#include <stdio.h>
#include <stdlib.h>

int main()
{
  int maxNumber = 100000;
  printf("Welcome to FizzBuzz");
  printf("\n\nPress any key to start");
  scanf("");

  for (int currentNumber = 0; currentNumber < maxNumber; currentNumber++)
  {
    if (currentNumber % 3 == 0 && currentNumber % 5 == 0)
    {
      printf("\nFizzBuzz");
      continue;
    }

    if (currentNumber % 3 == 0)
    {
      printf("\nFizz");
      continue;
    }

    if (currentNumber % 5 == 0)
    {
      printf("\nBuzz");
      continue;
    }
    printf("\n%d", currentNumber);
  }

  exit(0);
}
