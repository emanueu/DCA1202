/******Crie uma função capaz de realizar multiplicação matricial da forma C=A*B. A função deve
receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A
e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas
de B). O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar
sua implementação, capaz de utilizar a função de multiplicação e imprimir as três matrizes. A
função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal. */

#include <stdio.h>

void multiMatriz(int**, int**, int**, int, int, int);
void lerMatriz(int**, int, int);
void alocarMatriz(int**, int, int);
void imprimirMatriz(int**, int, int);

int main()
{
    int nlma1, nlincol, ncma2;
    int i, j;
    int **matriz1, **matriz2, **soma;

    printf("diga a quantidade de linhas da matriz1 ");
    scanf("%d", &nlma1);

    printf("diga a quantidade de colunas da matriz 1 e linhas da matriz 2 ");
    scanf("%d", &nlincol);

    printf("diga a quantidade de colunas da matriz2 ");
    scanf("%d", &ncma2);

    //alocarMatriz(matriz1, nlma1, nlincol);
    //alocarMatriz(matriz2, nlincol, ncma2);
    //alocarMatriz(soma, nlma1, ncma2);
    matriz1 = malloc(nlma1 * sizeof(int*));
    matriz1[0] = malloc(nlma1 * nlincol * sizeof(int));
    for(i=1; i<nlma1; i++){
        matriz1[i] = matriz1[i-1]+nlincol;
    }

    matriz2 = malloc(nlincol * sizeof(int*));
    matriz2[0] = malloc(nlincol * ncma2 * sizeof(int));
    for(i=1; i<nlincol; i++){
        matriz2[i] = matriz2[i-1]+ncma2;
    }

    soma = malloc(nlma1 * sizeof(int*));
    soma[0] = malloc(nlma1 * ncma2 * sizeof(int));
    for(i=1; i<nlma1; i++){
        soma[i] = soma[i-1]+ncma2;
    }

    printf("leia a matriz 1 %d x %d\n", nlma1, nlincol);
    lerMatriz(matriz1, nlma1, nlincol);
    printf("leia a matriz 2 %d x %d\n", nlincol, ncma2);
    lerMatriz(matriz2, nlincol, ncma2);

    for(i=0; i<nlma1; i++){
        for(j=0; j<ncma2; j++){
            soma[i][j] = 0;
        }
    }

    multiMatriz(matriz1, matriz2, soma, nlma1, nlincol, ncma2);

    printf("matriz 1: \n");
    imprimirMatriz(matriz1, nlma1, nlincol);
    printf("matriz 2: \n");
    imprimirMatriz(matriz2, nlincol, ncma2);
    printf("matriz soma: \n");
    imprimirMatriz(soma, nlma1, ncma2);

    return 0;
}

void imprimirMatriz(int **matriz, int nl, int nc){
    int i, j;
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void alocarMatriz(int **matriz, int nl, int nc){
    int i, j;
    matriz = malloc(nl * sizeof(int*));
    matriz[0] = malloc(nl * nc * sizeof(int));
    for(i=1; i<nl; i++){
        matriz[i] = matriz[i-1]+nc;
    }
    printf("matriz alocada\n");
}

void lerMatriz(int **matriz, int nl, int nc){
    int i, j;
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}

void multiMatriz(int **m1, int **m2, int **mFinal, int nl1, int nc1l2, int nc2){
    int i, j, k;
    for(i=0; i<nl1; i++){
        for(j=0; j<nc2; j++){
            for(k = 0; k < nc1l2; k++){
                mFinal[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
}
