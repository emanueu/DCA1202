#include <stdio.h>
#include <time.h>

int compara(const void*, const void*);

int main()
{
    clock_t tempo = clock();

    int i, n;
    int *vet;

    printf("insira o valor de n\n");
    //scanf("%d", &n);
    n = 5;

    vet = malloc(n * sizeof(int));

    for(i=0; i<n; i++){
        //scanf("%d", &vet[i]);
        vet[i] = n - i;
    }

    qsort(vet, n, sizeof(int), compara);

    for(i=0; i<n; i++){
        printf("%d ", vet[i]);
    }

    free(vet);

    printf("\n Tempo: %f", (clock() - tempo) / (double)CLOCKS_PER_SEC);

    return 0;
}

int compara(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
