              /* Calculando o índice de massa corporal(IMC) */

#include <stdio.h>
#include <math.h>

int main(void) {
  float a, p, i;

  printf("Digite sua Altura, ex 1.80: ");
  scanf("%f", &a);
  printf("Digite seu peso: ");
  scanf("%f", &p);

  i = p/pow(a,2);

  printf("IMC = %.1f kg\n", i);
  return 0;
}

