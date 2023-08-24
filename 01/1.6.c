#include <stdio.h>

int main() {
  int c;

  c = getchar() != EOF;
  printf("c has value: %d", c);

  return 0;
}
