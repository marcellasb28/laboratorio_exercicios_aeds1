#include<stdio.h>

int main (){
    int num1, num2;

    printf("Primeiro num:");
    scanf("%d", &num1);

    printf("Segundo num:");
    scanf("%d", &num2);

    if (num1 > num2){
        printf(" O maior num e: %d" , num1);
    } else if (num2 > num1){
            printf("O maior num e: %d" , num2);
        } else{
            printf("Ambos são iguais");
        }   
    

    return 0;

}