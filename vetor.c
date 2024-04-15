/*#include<stdio.h>

int main(){

    int v[6];

    for (int i = 0; i <6; i++){
        printf("digite o conteudo da posicao %d :", i);
        scanf("%d", &v[i]);
    }

    for ( int i = 0; i < 6; i++){
        printf("\no conteudo da posicao %d e : %d", i , v[i]);
    }
}*/

//escreva um programa que receba as notas de 10 alunos e armazene essas notas em um array. 
//Depois de armazenar o programa deve calcular a média das notas.

/*#include<stdio.h>

int main(){

    float notas[10];
    float media = 0;
    float soma=0;

    for (int i = 0; i < 10; i++){
        printf("digite a nota do aluno %d: ", i);
        scanf("%f", &notas[i]);
    }

    for( int i = 0; i <10; i++){
        soma = soma + notas[i];  
    }

    media = soma /10;

    printf("a media das notas e : %.1f", media);
}*/

//escreva um programa que receba dois vetores do mesmo tamanho (pode escolher).
//após a leitura dos vetores faça a intercalação desses vetores gerando um terceiro vetor.

/*#include<stdio.h>

int main(){

    int vetor1[5] = {10, 20, 30, 40, 50};
    int vetor2[5] = {11, 22, 33, 44, 55};
    int vetor3[10];
    int j = 0;

    // {                      }

    //      0 , 1,  2,  3

    for (int i = 0 ; i < 5; i++){
        vetor3[j] = vetor1[i];
        j++;
        vetor3[j] = vetor2[i];
        j++;
    }


    for (int i = 0; i < 10 ; i++){
        printf("\no valor da posicao %d de vetor3 e : %d", i , vetor3[i]);
    }

}*/

//refaca o exercicio 2 considerando que os arrays de entrada possam ter tamanhos distintos. 
//seu porgrama deve solicitar os tamanhos dos arrays para o usuário.

#include<stdio.h>

int main(){

    int n1;
    int n2;
    int j = 0;
    
    printf ("\ntamanho primeiro vetor: ");
    scanf("%d", &n1);

    printf ("\ntamanho segundo  vetor: ");
    scanf("%d", &n2);

    int vetor1[n1];
    int vetor2[n2];

    int vetor3[n1+n2];

    for (int i = 0; i < n1 + 1; i++){
        printf("digite o conteudo da posicao %d do vetor 1 :", i);
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < n1; i++){
        printf("digite o conteudo da posicao %d do vetor 2 :", i);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0 ; i < n1 + n2; i++){
        
     
            vetor3[j] = vetor1[i];
            j++;
            vetor3[j] = vetor2[i];
            j++;

        
    }

    for (int i = 0; i < 10 ; i++){
        printf("\no valor da posicao %d de vetor3 e : %d", i , vetor3[i]);
    }





}