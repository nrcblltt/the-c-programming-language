#include <stdio.h>
#define MAXLINE 1000

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

// visualizza la riga piu' lunga del testo in ingresso
int main() {
  int len; // lunghezzza della riga corrente
  int max; // lunghezza massima riscontrata finora
  char line[MAXLINE]; // riga corrente
  char longest[MAXLINE]; // contiene le riga piu' lunga trovata

  max = 0;
  while ((len = mygetline(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }

  if (max > 0)
    printf("%s", longest);

  return 0;
}

// getline legge una riga in ingresso, la assegna a s
// e ne restituisce la lunghezza
int mygetline(char s[], int lim) {
  int c, i;

  //for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
  //  s[i] = c;

  // this one uses break which is not yet introduced
  /*
  for (i = 0; i < lim-1 ; ++i) {
    if ((c=getchar()) == EOF) {
      break;
    }
    if (c == '\n') {
      break;
    }
    s[i] = c;
  }
  */

  // this is taken from https://clc-wiki.net/wiki/K%26R2_solutions:Chapter_2:Exercise_2
  for (i = 0; (i < lim-1) * ((c=getchar()) != EOF) * (c != '\n'); ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = '\n';
    ++i;
  }

  s[i] = '\0';
  return i;
}

// copia stringa 'from' in stringa 'to'
// assumendo che 'to' sia abbastanza lunga
void copy(char to[], char from[]) {
  int i = 0;

  while ((to[i] = from[i]) != '\0')
    ++i;
}

  
    
    

