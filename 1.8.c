#include <stdio.h>

main() {
  int nc;
  char c;

  nc = 0;

  while ((c=getchar()) != EOF) {
    if (c == '\t') {
      ++nc;
    }
    if (c == '\n') {
      ++nc;
    }
    if (c == ' ') {
      ++nc;
    }
  }
 
  printf("%d\n", nc);
}
