/*escreva um programa que receba 3 números inteiros e imprima se esses três 
números formam um triangulo, ou seja: um dos lados deve ser maior que a soma dos outros dois */

#include<stdio.h>

int main(){

    int a, b, c;

    printf("Primeiro numero:");
    scanf("%d", &a);

    printf("Segundo numero:");
    scanf("%d", &b);

    printf("Terceiro numero:");
    scanf("%d", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
    printf("triangulo formado");
    } else {
    printf("nao forma triangulo ");
    }

    return 0;
}