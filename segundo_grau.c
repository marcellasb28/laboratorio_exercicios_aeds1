#include <stdio.h>
#include <math.h>

int main() {

    float a,b,c, delta, x1, x2;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = pow(b,2) - 4*a*c;
    //pow é de potência

    if (delta >= 0) {
        x1 = (-b+sqrt(delta))/(2*a);
        //printf("x1: %2.f\n", x1);
        //sqrt é a raíz quadrada, da biblioteca math.h
        
        x2 = (-b-sqrt(delta))/(2*a);
        //printf("x2: %2.f\n", x2);

        printf("%.1f %.1f %.1f", delta, x1, x2);
    }

    if (delta < 0 ){
        printf( "%.1f Nao existem raizes", delta);
    }

    return 0;
}
