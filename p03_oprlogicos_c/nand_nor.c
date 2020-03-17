                   /*-- Operadores lógicos NAND, NOR --*/
  

/* Tabela verdade (NAND) | Tabela verdade   (NOR)  
* 0 0 = 1 - Verdadeiro   | * 0 0 = 1 - Verdadeiro 
* 0 1 = 1 - Verdadeiro   | * 0 1 = 0 - Falso     
* 1 0 = 1 - Verdadeiro   | * 1 0 = 0 - Falso     
* 1 1 = 0 - Falso        | * 1 1 = 0 - Falso   */
   
//Para usar a logica NAND, Não E use (&&),(!) 
//Para usar a logica NOR, Não OU use (||),(!)
  

//O exemplo abaixo usa a logica NAND(&&),(!)
 
#include <stdio.h>
 
int main(void) {
  int a, b, c;
  a = 0;
  b = 1;

  c = (a && b);

  printf("Resultado: %d\n", !c );
  
  return 0;
}

