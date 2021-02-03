#include <stdio.h>

int compara(const void*, const void*);

int main()
{
    int i, n;
    int *vet;

    printf("insira o valor de n\n");
    scanf("%d", &n);

    vet = malloc(n * sizeof(int));

    for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    qsort(vet, n, sizeof(int), compara);

    for(i=0; i<n; i++){
        printf("%d ", vet[i]);
    }

    free(vet);

    return 0;
}

int compara(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
