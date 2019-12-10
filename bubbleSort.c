#include <stdio.h>

int main(){
    int vetor[] = {10, 3, 9, 15, 2, 0, -1};

    for(int i = (sizeof(vetor) / sizeof(int)) - 1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(vetor[j] > vetor[j+1]){
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < (sizeof(vetor) / sizeof(int)); i++){
        printf("%d ", vetor[i]);
    }
}