#include <stdio.h>

void insertionSort(int vetor[], int n) {
   int i, key, j;
   for (i = 1; i < n; i++) {
       key = vetor[i];
       j = i - 1;

       while (j >= 0 && vetor[j] > key) {
           vetor[j + 1] = vetor[j];
           j = j - 1;
       }
       vetor[j + 1] = key;
   }
}

int main() {
   int vetor[] = {64, 25, 12, 22, 11, 9};
   int n = sizeof(vetor) / sizeof(vetor[0]);

   insertionSort(vetor, n);

   printf("Array ordenado: \n");
   for (int i = 0; i < n; i++)
       printf("%d ", vetor[i]);
   printf("\n");

   return 0;
}
