/*escreva um programa que receba a idade de um nadador e
 mostre sua categoria usando as regras a seguir:

    INFANTIL    5 A 7 ANOS
    JUVENIL     8 A 12 ANOS
    ADOLESCENTE 13 A 19 ANOS
    ADULTO      20 A 60
    SENIOR      ACIMA DE 60
*/

#include<stdio.h>

int main(){

  int idade;
  printf("Digite a idade:");
  scanf("%d", &idade);

  if ((idade >= 5) && (idade <= 7)) {
    printf("categoria infantil");

  } else if ((idade >= 8) && (idade <= 12)) {
    printf("categoria juvenil");

  } else if ((idade >= 13) && (idade <= 19)) {
    printf("categoria adolescente");

  } else if ((idade >= 20) && (idade <= 60)) {
    printf("categoria adulto");

  } else if (idade > 60) {
    printf("categoria senior");

  } else if (idade < 5) {
    printf("idade invalida");
  }


  return 0;  
}