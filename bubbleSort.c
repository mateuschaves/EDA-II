#include <stdio.h>

int main(){
    int vetor[] = {10, 3, 9, 15, 2, 0, -1, 10, 91, 103, -123, 31923};
    int numeroAcoes = 0;
    
    printf("\n\nTamanho do vetor: %d\n", sizeof(vetor)/sizeof(int));
    printf("Vetor desordenado\n\n");
    for(int i = 0; i < (sizeof(vetor) / sizeof(int)); i++){
        printf("%d ", vetor[i]);
    }

    for(int i = (sizeof(vetor) / sizeof(int)) - 1; i > 0; i--){
        for(int j = 0; j < i; j++){
            // Comparando o par de números
            if(vetor[j] > vetor[j+1]){
                // Calculando o número de ações
                numeroAcoes++;
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }

    printf("\n\nNumero de acoes executadas: %d\n\n", numeroAcoes);

    printf("Vetor ordenado\n\n");
    for(int i = 0; i < (sizeof(vetor) / sizeof(int)); i++){
        printf("%d ", vetor[i]);
    }
}