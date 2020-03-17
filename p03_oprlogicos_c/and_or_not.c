               /*-- Operadores lógicos AND, OR, NOT --*/


/* Tabela verdade (E, AND) | Tabela verdade (OU, OR) | Tabela verdade (NOT)
* 0 0 = 0 - Falso          | * 0 0 = 0 - Falso       | * 0 = 1 
* 0 1 = 0 - Falso          | * 0 1 = 1 - Verdadeiro  | * 1 = 0           
* 1 0 = 0 - Falso          | * 1 0 = 1 - Verdadeiro  |
* 1 1 = 1 - Vedadeiro      | * 1 1 = 1 - Verdadeiro  |                   */

//Para usar a logica AND use (&&)
//Para usar a logica OR use (||)
//Para usar a logica NOT negado/inverte a saida, use (!)


//Exemplo usando a logica AND(&&)

#include <stdio.h>

int main(void) {
  int a, b, c;
  a = 1;
  b = 1;
  
  c = (!a && !b);
  
  printf("Resultado: %d\n", c );
  
  return 0;
}  

//Exemplo usando a logica NOT(!) 
/*
#include <stdio.h>

int main(void) {
  int a, c;
  a = 0;
  
  c = !a;

  printf("Resultado: %d\n", c );

  return 0;
} */

