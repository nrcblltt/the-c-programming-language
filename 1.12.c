#include <stdio.h>

int main() {
  int c;

  while ((c=getchar()) != EOF) {
    if (c == ' ' || c == '\t') {
      printf("\n");
      c=getchar();
      while ( c == ' ' || c == '\t') {
	c=getchar();
      }
      putchar(c);
    } else {
      putchar(c);
    }
  }

  return 0;
}
