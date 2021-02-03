//Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função
//de ordenação. Para isso, sua função deverá receber, entre outros argumentos, um ponteiro para
//a função de comparação.

#include <stdio.h>

int compara(const void*, const void*);
void organiza (int (*func)(void*, void*), void *pont, int qtd, int tam);
void troca(const void*, const void*);

int main()
{
    int *vet;
    int n, i;

    scanf("%d", &n);

    vet = malloc(n * sizeof(int));

    for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    organiza(compara, vet, n, sizeof(int));

    for(i=0; i<n; i++){
        printf("%d ", vet[i]);
    }

    free(vet);

    return 0;
}

int compara(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

void troca(const void *a, const void *b){
    int temp = *(int*)a;
    *(int*)a = *(int*)b;
    *(int*)b = temp;
}

void organiza (int (*func)(void*, void*), void *pont, int qtd, int tam){
    int i, j, res;
    for(i = 0; i < qtd-1; i++){
        for(j = 0; j < (qtd-1); j++){
            res = (func)((pont + (j*tam)), (pont + ((j+1)*tam)));
            if(res > 0) troca((pont + (j*tam)), (pont + ((j+1)*tam)));
        }
    }
}
