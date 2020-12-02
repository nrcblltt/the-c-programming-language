#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int max);
int strrindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main()
{
  char line[MAXLINE];
  int i;

  while (get_line(line, MAXLINE) > 0)
    if ((i = strrindex(line, pattern)) >= 0) {
      printf("last occurrence of %s is at index %d", pattern, i);
    } else {
      printf("no match found");
    }
  return 0;
}

int get_line(char s[], int lim)
{
  int c, i;

  i = 0;
  while(--lim > 0  && (c=getchar()) != EOF && c !='\n')
    s[i++] = c;
  if (c == '\n')
    s[i++] = c;
  s[i] = '\0';
  return i;
}

int strrindex(char s[], char t[])
{
  int i, j, k;
  int last = -1;

  for (i = 0; s[i] != '\0'; i++) {
    for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
      ;
    if (k > 0 && t[k] == '\0')
      last = i;
  }
  return last;
}
