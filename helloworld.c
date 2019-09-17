#include <stdio.h>
#include <stdlib.h>

int main() 
{
  char name[20];
  printf("Your name: ");
  fgets(name, 20, stdin);
  printf("Your name is %s\n", name);
  return 0;
}