// atividade de repetição
// while com loop indeterminado
// ler o salário de pessoas de uma empresa e fazer a média até o valor inserido ser 0.

#include<stdio.h>

/*int main () {

    float salario;
    float soma = 0;
    int cont = 0;
    float media;

    printf("Digite o salario:");
    scanf("%f", &salario);

    while (salario>0){
        soma= soma+salario;
        cont++;
        media = soma / cont;
        printf("Digite o salario:");
        scanf("%f", &salario); 
    }

    printf("*Foram inseridos %d salarios.\n", cont);
    printf("*A soma deles e: %.2f\n", soma);
    printf("*A media deles e: %.2f\n", media);

    return 0;
}
*/

// loop dentro do outro
// escreva um programa que receba um número inteiro e imprima se o número é primo ou não.
// entrada=numero, processamento=  , saida= primo ou não.
// primo é dividido por ele mesmo ou por 1.

/*int main (){
    int num;
    bool resultado;

    printf("Digite o numero:");
    scanf("%d", &num);

    for (int i = 1; i < num /2; i++){
        if((num % i) == 0) {
            resultado = true;
        } 
        else{
            resultado = false;
        }
    }

    if(resultado = true) {
        printf("Numero primo\n");
    } 
        else{
            printf("Nao e primo\n");
    }
}

*/

int main (){
    int num;
    int primo = 1;

    printf("Digite o numero:");
    scanf("%d", &num);

    for (int i = 2; i < num+2 ; i++){
        if((num % i) == 0) {
            primo = 0;
        } 
    }

    if(primo==1) {
        printf("Primo");
    } 
    else{
        printf("Nao primo");
    }
}

//versão 2 = ficar digitanto primo ou não primo até dar um número negativo


