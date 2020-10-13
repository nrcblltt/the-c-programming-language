#include <stdio.h>

main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = -100;
  upper = 100;
  step = 4;

  printf("Celsius\tFahrenheit\n");
  
  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0/5.0) * celsius + 32;
    printf("%7.0f\t%10.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
