#include <stdio.h>

int main() {
  int c;
  int spaces = 0;

  while ((c=getchar()) != EOF) {
    if (c == ' ' || c == '\t') {
      if (spaces == 0) {
	spaces = 1;
	printf("\n");
      }
    } else {
      spaces = 0;
      putchar(c);
    }
  }

  return 0;
}
  
