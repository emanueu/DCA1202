#include <stdio.h>

int main()
{
    int enderecoInicial = 4092;
    char a[4];
    int b[4];
    float c[4];
    double d[4];
    int i;

    //para char
    //como no ideal, aumenta 1 byte
    printf("para TIPO == char\n");
    for(i=0; i<4; i++){
        printf("enrereco ideal %d ", enderecoInicial+i);
        printf("enredeco real %X ", &a[i]);
        printf("\n");
    }

    //para int
    //o ideal aumentou 2 bytes, o real aumentou 4 bytes
    printf("\npara TIPO == int\n");
    for(i=0; i<4; i++){
        printf("enrereco ideal %d ", enderecoInicial+(2*i));
        printf("enredeco real %X ", &b[i]);
        printf("\n");
    }

    //para float
    //como no ideal, aumentou 4 bytes
    printf("\npara TIPO == float\n");
    for(i=0; i<4; i++){
        printf("enrereco ideal %d ", enderecoInicial+(4*i));
        printf("enredeco real %X ", &c[i]);
        printf("\n");
    }

    //para double
    //como o ideal, aumentou 8 bytes
    printf("\npara TIPO == double\n");
    for(i=0; i<4; i++){
        printf("enrereco ideal %d ", enderecoInicial+(8*i));
        printf("enredeco real %X ", &d[i]);
        printf("\n");
    }
    return 0;
}
