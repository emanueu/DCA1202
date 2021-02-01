//Implemente em linguagem C uma função em um programa de computador que leia n valores do
//tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
//realizar a tarefa.

#include <stdio.h>

void ordena(int*, int);
void troca(int*, int*);

int main()
{
    int n, i;
    int *x;

    scanf("%d", &n);

    x = malloc(n * sizeof(int));

    for(i=0; i<n; i++){
        scanf("%d ", &x[i]);
    }

    ordena(x, n);

    for(i=0; i<n; i++){
        printf("%d ", x[i]);
    }

    free(x);

    return 0;
}

void troca(int *a, int *b){
    int *temp;
    temp = a;
    a = b;
    b = temp;
}

void ordena(int *ptro, int n){
    int i, j, temp;
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            if(ptro[j] > ptro[j+1]){
                temp = ptro[j];
                ptro[j] = ptro[j+1];
                ptro[j+1] = temp;
            }
        }
    }
}
