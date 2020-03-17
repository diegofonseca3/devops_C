                 /*-- Operadores lógicos XOR, XNOR --*/
  

/* Tabela verdade (XOR) | Tabela verdade  (XNOR)
 * 0 0 = 0 - Falso      | * 0 0 = 1 - Verdadeiro 
 * 0 1 = 1 - Verdadeiro | * 0 1 = 0 - Falso
 * 1 0 = 1 - Verdadeiro | * 1 0 = 0 - Falso
 * 1 1 = 0 - Falso      | * 1 1 = 1 - Falso   */
   
//Para usar a logica XOR Exclusica OR, use (^)
//Para usar a logica XNOR Exclusica Negada OR, use (^),(!)
  

//O exemplo abaixo usa a logica XNOR(^),(!)
 
#include <stdio.h>
 
int main(void) {
  int a, b, c;
  a = 1;
  b = 1;

  c = (a ^ b);

  printf("Resultado: %d\n", !c );
  
  return 0;
}

