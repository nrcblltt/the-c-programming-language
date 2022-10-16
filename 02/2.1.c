#include <stdio.h>

int main()
{
  printf("stampa dimensioni massime e minime per calcolo diretto\n");
  char charv = 0;
  short int shortv = 0;
  int intv = 0;
  long int longv = 0;
  
  char newcharv = charv+1; 
  
  while (newcharv > charv) {
    ++newcharv;
    ++charv;
  }

  printf("char ha valore massimo %d\n", charv);

  newcharv = charv-1;

  while (newcharv < charv) {
    --newcharv;
    --charv;
  }

  printf("char ha valore minimo %d\n", charv);

  short int newshortv = shortv+1; 
  
  while (newshortv > shortv) {
    ++newshortv;
    ++shortv;
  }

  printf("short int ha valore massimo %d\n", shortv);

  newshortv = shortv-1;

  while (newshortv < shortv) {
    --newshortv;
    --shortv;
  }

  printf("short int ha valore minimo %d\n", shortv);

  //others are similar (except for float and double?)
  
  return 0;
}
