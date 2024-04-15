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

    if (((a + b > c) && (a + c > b) && (b + c > a)) && ((a==b) && (b==c))){
        printf("triangulo equilatero formado");

    } else if (((a + b > c) && (a + c > b) && (b + c > a)) && ((a != c) && (c!= b) && (a!= b))){
       printf("triangulo escaleno formado"); 

    } else if (((a + b > c) && (a + c > b) && (b + c > a)) && (((a == c) && (c!= b)) || ((a==b) && (b!=c)))){
        printf("triangulo isoceles formado");

    } else {
        printf("nao forma triangulo ");
    }

    return 0;
}

//outro modo de fazer

/*if ((a<b+c) && (b<a+c) && (c<a+b)){
    printf("forma triang");

    if ((a==b) && (b==c)){
        printf("triang aquilatero");
    } else {
        if((a!=b) && (b!=c) && (a!=c)){
            printf("escaleno");
        }else {
            printf("isoceles");
        }
    }
}

*/