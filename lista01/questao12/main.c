#include <stdio.h>
#include <string.h>

int equa(int (*pf)(int, int), int, int);

int soma(int, int);
int multi(int, int);
int afim(int, int);

int main () {
    int a = 5, b = 3, c;
    int (*prt)(int, int);

    //para funcao soma
    prt = soma;
    c = prt(a,b);
    printf("soma = %d \n", c);

    //para funcao multi
    prt = multi;
    c = prt(a, b);
    printf("multiplicacao = %d \n", c);

    //como parametro
    c = equa(afim, a, b);
    printf("funcao afim = %d \n", c);


    return 0;
}

int soma (x, y){
    return (x+y);
}

int multi(x, y){
    return (x*y);
}

int afim(x, y){
    return (2*x + y);
}

int equa(int (*pf)(int, int), int x, int y){
    return pf(x, y);
}

