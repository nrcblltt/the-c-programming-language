#include <stdio.h>

int main() {
  int in = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ') {
      if (in) {
	in = 0;
	putchar('\n');
      }
    } else {
      if (!in) {
	in = 1;
	putchar(c);
      } else {
      putchar(c);
      }
    }
  }

  return 0;
}
