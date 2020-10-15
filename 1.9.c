#include <stdio.h>

main() {
  int c;
  int spc = 0;
  
  while ((c = getchar()) != EOF) {
    if (c  == ' ') {
      if (spc == 0) {
	putchar(c);
	++spc;
      }
    }
    if (c != ' ') {
      spc = 0;
      putchar(c);
    }
  }
}
    
