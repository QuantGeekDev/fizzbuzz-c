#include "fizzbuzz.h"
#include <stdlib.h>

int numberOfIterations = 100;

int main()
{
  welcomeMessage();
  fizzBuzzLoop(numberOfIterations);
  exit(0);
}
