#include <stdio.h>
#define MAX_WORDLENGTH 200

int main() {
  int lengths[MAX_WORDLENGTH] = { };
  
  int in = 0;
  int wordlength = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ') {
      if (in) {
	in = 0;
	++lengths[wordlength];
	wordlength = 0;
      }
    } else {
      if (!in) {
	in = 1;
	++wordlength;
      } else {
	++wordlength;
      }
    }
  }

  for (int i = 1; i < MAX_WORDLENGTH; ++i) {
    if (lengths[i] > 0) {
      printf("%d: ", i);
      while (lengths[i] > 0) {
	putchar('*');
	--lengths[i];
      }
      putchar('\n');
    }
  }

  return 0;
}
