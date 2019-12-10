#include <stdio.h>
#include <stdlib.h>
 
int quick_sort(int *a, int esquerda, int direita);
int numeroAcoes = 0;

int main(int argc, char** argv)
{
 int i, vetor[] = {1, -123, 0, -20, 1341, 4, 83};

 printf("\n\nTamanho do vetor: %d\n", sizeof(vetor)/sizeof(int));
 printf("Vetor desordenado\n\n");
 for(i = 0; i < sizeof(vetor) / sizeof(int) ; i++)
 {
  printf("%d ", vetor[i]);
 }

 quick_sort(vetor, 0, (sizeof(vetor) / sizeof(int) )- 1);
 printf("\n\nNumero de acoes executadas: %d\n\n", numeroAcoes);
 printf("Vetor ordenado\n\n");
 for(i = 0; i < sizeof(vetor) / sizeof(int) ; i++)
 {
  printf("%d ", vetor[i]);
 }
 return 0;
}
 
int quick_sort(int *a, int esquerda, int direita) {
    int i, j, x, y;

    i = esquerda;
    j = direita;
    x = a[(esquerda + direita) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < direita) {
            i++;
        }
        while(a[j] > x && j > esquerda) {
            j--;
        }
        if(i <= j) {
            numeroAcoes++;
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > esquerda) {
        quick_sort(a, esquerda, j);
    }
    if(i < direita) {
        quick_sort(a, i, direita);
    }

}