#include <stdio.h>

int main() {
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

  return 0;
}

//forse era meglio tenere conto del carattere precedente
//con una variabile int
    
