// for básico
// escopo de variavel : o i fora do for é diferente  do i dentro do for.
#include<stdio.h>
#include<math.h>

int main(){
    int i , final, passo;
    printf("Digite o primeiro numero:");
    scanf("%d", &i);

    printf("Digite o segundo numero:");
    scanf("%d", &final);

    printf("Digite a variavel do intervalo:");
    scanf("%d", &passo);


    if (i>= final){
        for( i=i; i>= final ; i= i + passo){ //só pode mudar aqui

        printf("\n O valor de i e: %d", i);

    }
    } else {
         for( i=i; i<= final; i= i + passo){ //só pode mudar aqui

        printf("\n O valor de i e: %d", i);

    }
    }   

}

/* exercícios :

a) Imprima números de 0 a 100; 
int main(){

    int i ;
    for( i=0; i<101; i++){ //só pode mudar aqui

        printf("\n O valor de i é: %d", i);

    }

}

b) Imprima números de 0 a 50 de 3 em 3; ex: 0, 3, 6,  9, ....

for( i=0; i<51; i= i+3){

c) Imprima números de 1 a 1024, multiplicando o anterior por 2; ex: 1, 2, 4, 8, 16, ...

for( i=1; i<1025; i = i * 2){

d) Imprima números de 100 a 0;

 for( i=100; i>= 0; i--)

e) Imprima números de 50 a 0, decrementando de 3 em 3; ex: 50, 47, 44, 41, ...

for( i=50; i>= 0; i = i - 3)

f) Imprima números de 1024 a 1, dividindo o anterior por 2; ex: 1024, 512, 256, 128, ...

 for( i=1024; i>= 1; i = i / 2)

g) imprimir um intervalo de numeros definido pelo usuário.

int main(){
    int i , final;
    printf("Digite o primeiro numero:");
    scanf("%d", &i);

    printf("Digite o segundo numero:");
    scanf("%d", &final);

    if (i>= final){
        for( i=i; i>= final ; i--){ //só pode mudar aqui

        printf("\n O valor de i e: %d", i);

    }
    } else {
         for( i=i; i<= final; i++){ //só pode mudar aqui

        printf("\n O valor de i e: %d", i);

    }
    }   

}



g.1) Além do intervalo, o usuário também deseja informar o passo


*/

