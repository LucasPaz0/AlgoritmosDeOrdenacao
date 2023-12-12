#include <stdio.h>

void selectionSort(int vetor[], int n) {
   int i, j, idc, temp;

   for (i = 0; i < n-1; i++) {
       idc = i;
       for (j = i+1; j < n; j++)
           if (vetor[j] < vetor[idc])
               idc = j;
       temp = vetor[idc];
       vetor[idc] = vetor[i];
       vetor[i] = temp;
   }
}

int main() {
   int vetor[] = {64, 25, 12, 22, 11, 9};
   int n = sizeof(vetor)/sizeof(vetor[0]);

   selectionSort(vetor, n);
   printf("Vetor ordenado: \n");
   for (int i=0; i <n; i++)
       printf("%d ", vetor[i]);
   return 0;
}