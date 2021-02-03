/***** Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de
outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo,
se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3,
5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4
argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor. */

#include <stdio.h>

void lerVetor(int*, int);
void funSoma(int*, int*, int*, int);

int main()
{
    int tam, i;
    int *v1, *v2, *soma;

    printf("Escreva o tamanho dos vetores 1\n");
    scanf("%d", &tam);

    v1 = malloc(tam * sizeof (int));
    v2 = malloc(tam * sizeof (int));
    soma = malloc(tam * sizeof (int));

    lerVetor(v1, tam);
    lerVetor(v2, tam);

    funSoma(v1, v2, soma, tam);

    for(i=0; i<tam; i++){
        printf("%d, ", soma[i]);
    }

    return 0;
}

void funSoma(int *v1, int *v2, int *som, int tam){
    int i;
    for(i=0; i<tam; i++){
        som[i] = v1[i]+v2[i];
    }
}

void lerVetor(int *vet, int n){
    int i;
    printf("Digite os valores do vetor");
    for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
}
