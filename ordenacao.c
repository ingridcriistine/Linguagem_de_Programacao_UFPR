//Receba um vetor com dez valores aleatoriamente ordenados e imprima
//* Este vetor ordenado em ordem crescente,
//* Uma quebra de linha (\n)
//* Este vetor ordenado em ordem decrescente

#include <stdio.h>

int main() {
    
    int vetor[10] = {27, 44, 68, 30, 91, 42, 3, -44, 15, -12};
    int temp = 0;
    
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(vetor[i] < vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    
    for(int k = 0; k < 10; k++) {
        printf("%i ", vetor[k]);
    }
    
    printf("\n");
    
    for(int k = 0; k < 10; k++) {
        printf("%i ", vetor[9-k]);
    }
    
    return 0;
}
