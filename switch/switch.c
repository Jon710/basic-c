#include <stdio.h>
#include <stdlib.h>

int main() {
  char grade = 'F';

  switch(grade) {
    case 'A' :
    printf("Great job! ");
    break;
    case 'B' :
    printf("Good job! ");
    break;
    case 'C' :
    printf("Poor job! ");
    break;
    case 'D' :
    printf("Awful job! ");
    break;
    case 'F' :
    printf("FAILED! ");
    break;
    default :
    printf("Did you even take the test?");
  }

  return 0;
}