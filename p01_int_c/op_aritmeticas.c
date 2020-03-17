            /*-- Calculando as 4 operações aritméticas --*/


#include <stdio.h>

int main() {
  int num1, num2, multiplica;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);

  printf("Digite o segundo numero: ");
  scanf("%d", &num2);
  
  multiplica = num1 * num2;
  printf("%.01d * %.01d = %.01d\n", num1, num2, multiplica);

  return 0 ;
}


//Função para Adição
//soma = num1 + num2;
//printf("%.d + %.d = %.d\n", num1, num2, soma);

//Função para Subtração
//subtrai = num1 - num2;
//printf("%.d - %.d = %.d\n", num1, num2, subtrai);

//Função para Multicação
//multiplica = num1 * num2;
//printf("%.d * %.d = %.d\n", num1, num2, multiplica);
 
//Função para Divisão
//divide = num1 / num2;
//printf("%.d / %.d = %.d\n", num1, num2, divide);

