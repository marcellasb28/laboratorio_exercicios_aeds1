#include<stdio.h>

int main(){
    int a, b, c;
    a=0;
    b=1;
    printf(" %d %d", a, b);

    for(int i=1; i<9; i++){
        c=a+b;
        b=c;
        printf("%d\n", c);
    }
    return 0;
}