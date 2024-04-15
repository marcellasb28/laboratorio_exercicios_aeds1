#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Define a codificação correta para o português
    float b, h, area;
    
    printf("Digite a base: ");
    scanf("%f", &b);
    
    printf("Digite a altura: ");
    scanf("%f", &h);
    
    area = (b * h) / 2;
    
    printf("A área é: %f\n", area);
    
    return 0;
}
