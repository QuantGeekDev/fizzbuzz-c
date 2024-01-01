#include <stdio.h>
#include <stdlib.h>
#include "fizzbuzz.h"

void welcomeMessage()
{
  printf("Welcome to FizzBuzz");
  printf("\n\nPress any key to start");
  scanf("Press Any Key To Start");
}

void fizzBuzzLoop(int numberOfIterations)
{
  int startingNumber = 1;

  for (int currentNumber = startingNumber; currentNumber < numberOfIterations; currentNumber++)
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
}
