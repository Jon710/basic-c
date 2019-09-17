#include <stdio.h>
#include <stdlib.h>

// prototyping so that main() is always on top
double cube(double num);

int main()
{
  printf("Answer: %f", cube(5));

  return 0;
}

double cube(double num) {
  return num * num * num;
}