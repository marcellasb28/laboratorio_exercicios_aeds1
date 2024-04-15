/*#include<stdio.h>

int main(){

    int matriz [4] [3];

//preenchimento da matriz

    for (int i = 0; i < 4 ; i++){
        for (int j = 0 ; j <3; j++){
            printf("digite o conteudo da linha %d coluna %d: \t", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

//impressão da matriz

    for ( int i = 0; i < 4; i ++){
        for ( int j = 0; j <3; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

}*/

//Exercício: 
// 1) Escreva um programa que leia uma matriz e imprima a soma dos elementos da matriz de tamanho escolhido pelo usuário.

/*#include<stdio.h>

int main(){
    int quantlinhas, quantcolunas;
    int somamatriz = 0;

    //entrada

    printf("Insira a quantidade de linhas de sua matriz:\t");
    scanf("%d", &quantlinhas);

    printf("Insira a quantidade de colunas de sua matriz:\t");
    scanf("%d", &quantcolunas);

    int matriz[quantlinhas][quantcolunas];

    for ( int linha = 0; linha < quantlinhas; linha ++ ){
        for ( int coluna = 0 ; coluna < quantcolunas; coluna ++){
            printf("valor linha %d coluna %d: \t", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

//mostrando a matriz criada

    for ( int linha = 0; linha < quantlinhas; linha ++ ){
        for ( int coluna = 0 ; coluna < quantcolunas; coluna ++){
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

//processamento da soma

    for (int somalinha = 0; somalinha < quantlinhas; somalinha ++ ){

        for (int col = 0; col < quantcolunas; col++){
            somamatriz = somamatriz + matriz[somalinha][col];
        }
    }

//saída da soma

    printf("A soma dos elementos da sua matriz e : %d", somamatriz);

}*/

/* 2) Continuação da questão anterior
a - Calcule e imprima a soma de cada linha. 
b- Calcule e imprima a soma de cada coluna. 
c- Calcule e imprima a soma da diagonal principal.
d- Calcule e imprima a soma da diagonal secundária.
*/

/*a- 

#include<stdio.h>

int main(){
    int quantlinhas, quantcolunas;
    int somalinha = 0;

    //entrada

    printf("Insira a quantidade de linhas de sua matriz:\t");
    scanf("%d", &quantlinhas);

    printf("Insira a quantidade de colunas de sua matriz:\t");
    scanf("%d", &quantcolunas);

    int matriz[quantlinhas][quantcolunas];

    for ( int linha = 0; linha < quantlinhas; linha ++ ){
        for ( int coluna = 0 ; coluna < quantcolunas; coluna ++){
            printf("valor linha %d coluna %d: \t", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    //mostrando a matriz criada

    for ( int linha = 0; linha < quantlinhas; linha ++ ){
        for ( int coluna = 0 ; coluna < quantcolunas; coluna ++){
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

//processamento da somada linha

    for (int linha = 0; linha < quantlinhas; linha ++ ){

        for (int col = 0; col < quantcolunas; col++){
            somalinha = somalinha + matriz[linha][col];
        }
        printf("a soma da linha %d e : %d.", linha, somalinha);
        printf("\n");
        somalinha = 0;
    }
}*/

/* b- 

#include<stdio.h>

int main(){
    int quantlinhas, quantcolunas;
    int somacoluna = 0;

    //entrada

    printf("Insira a quantidade de linhas de sua matriz:\t");
    scanf("%d", &quantlinhas);

    printf("Insira a quantidade de colunas de sua matriz:\t");
    scanf("%d", &quantcolunas);

    int matriz[quantlinhas][quantcolunas];

    for ( int linha = 0; linha < quantlinhas; linha ++ ){
        for ( int coluna = 0 ; coluna < quantcolunas; coluna ++){
            printf("valor linha %d coluna %d: \t", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    //mostrando a matriz criada

    for ( int linha = 0; linha < quantlinhas; linha ++ ){
        for ( int coluna = 0 ; coluna < quantcolunas; coluna ++){
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

//processamento da soma da coluna

    for (int coluna = 0; coluna < quantcolunas; coluna ++ ){

        for (int linha = 0; linha < quantlinhas; linha++){
            somacoluna = somacoluna + matriz[linha][coluna];
        }
        printf("a soma da coluna %d e : %d.", coluna, somacoluna);
        printf("\n");
        somacoluna = 0;
    }
} */

/* c- 

#include<stdio.h>

int main(){
    int quantlinhas, quantcolunas;
    int somadiagonal = 0;
    int linhadiagonal = 0;

    //entrada

    printf("Insira a quantidade de linhas de sua matriz:\t");
    scanf("%d", &quantlinhas);

    printf("Insira a quantidade de colunas de sua matriz:\t");
    scanf("%d", &quantcolunas);

    int matriz[quantlinhas][quantcolunas];

    for ( int linha = 0; linha < quantlinhas; linha ++ ){
        for ( int coluna = 0 ; coluna < quantcolunas; coluna ++){
            printf("valor linha %d coluna %d: \t", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    //mostrando a matriz criada

    for ( int linha = 0; linha < quantlinhas; linha ++ ){
        for ( int coluna = 0 ; coluna < quantcolunas; coluna ++){
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

//processamento da soma da diagonal

    for (int coluna = 0; coluna < quantcolunas; coluna++){
        linhadiagonal = coluna;
        somadiagonal= somadiagonal + matriz[coluna][linhadiagonal];
    }

    printf("a soma da diagonal e : %d.", somadiagonal);
}*/

/* d- 
*/

#include<stdio.h>

int main(){
    int quantlinhas, quantcolunas;
    int somadiagonalsec = 0;
    int tamanho;

    //entrada

    printf("Insira a quantidade de linhas de sua matriz:\t");
    scanf("%d", &quantlinhas);

    printf("Insira a quantidade de colunas de sua matriz:\t");
    scanf("%d", &quantcolunas);

    printf("Insira o tamanho sua matriz:\t");
    scanf("%d", &tamanho);

    int matriz[quantlinhas][quantcolunas];

    for ( int linha = 0; linha < quantlinhas; linha ++ ){
        for ( int coluna = 0 ; coluna < quantcolunas; coluna ++){
            printf("valor linha %d coluna %d: \t", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    //mostrando a matriz criada

    for ( int linha = 0; linha < quantlinhas; linha ++ ){
        for ( int coluna = 0 ; coluna < quantcolunas; coluna ++){
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

//processamento da soma da diagonal secundária
    for ( int linha = 0; linha < quantlinhas; linha ++ ){
        for ( int coluna = 0 ; coluna < quantcolunas; coluna ++){
            if ((linha + coluna) == (tamanho - 1)){
                somadiagonalsec= somadiagonalsec + matriz[linha][coluna];
            }
        }
    }

    printf("a soma da diagonal secundaria e : %d.", somadiagonalsec);
}

//triangulo inferior i > j
//triangulo superior j>i