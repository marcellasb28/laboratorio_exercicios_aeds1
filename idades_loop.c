// estruturas de repetição for e while

#include<stdio.h>
/* loop com for 
int main(){
    int idade;
    int soma = 0;
    int media;
    for(int i = 0; i<8; i++){
        printf("\nDigite a idade:");
        scanf("%d", &idade);
        soma = soma + idade;
        printf(" \nA soma e: %d", soma);
        media = soma/8;
        printf(" \nA media e: %d ", media);

    }
    return 0;
}
*/

/*com erro

int main(){
    int soma=0, cont=0;
    int idade = 1;
    int media;
    while(idade>0){
        printf("Digite a idade:");
        scanf("%d", &idade);
        soma=soma+idade;
        cont++;
        
    }
    media = soma/cont;
    
}*/

/*
int main(){
    int soma=0, cont=0;
    int idade = 1;
    int media;
    while(idade>0){
        printf("\nDigite a idade:");  
        scanf("%d", &idade);
        soma=soma+idade;
        cont++;
        media = soma/cont;
        printf("\nA media e: %d", media);
    }
    
    
}
*/

/*tendo um número limitado de idades:

int main(){
    int soma=0, cont=0;
    int idade = 1;
    int media;
    while(idade>0){
        printf("\nDigite a idade:");  
        scanf("%d", &idade);
        soma=soma+idade;
        cont++;
     
    }

    if(idade<=0){
        soma -= idade;
    }    
    media = soma/cont;
    printf("\nA media e: %d", media);
}
*/

//modo do walisson



int main(){
    int idade, soma=0, cont=0;
    printf("Digite a idade:");
    scanf("%d", &idade);

    while(idade>0){
        soma=soma+idade;
        cont++;
        printf("Digite a idade:");
        scanf("%d", &idade);
    }
}
