#include <stdio.h>

int main() {
  int c, i;
  int frequency[26];

  for (i = 0; i < 26; ++i)
    frequency[i] = 0;

  while ((c=getchar()) != EOF) {
    if (c >= 'a' && c <= 'z')
      ++frequency[c-'a'];
    else if (c >= 'A' && c <= 'Z')
      ++frequency[c-'A'];
  }

  for (int i = 0; i < 26 ; ++i) {
    printf("%c %c | ", i+97, i+65);
    while (frequency[i] > 0) {
      printf("*");
      --frequency[i];
    }
    printf("\n");
  }

  return 0;
}
