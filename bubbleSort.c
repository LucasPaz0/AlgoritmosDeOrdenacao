#include <stdio.h> 

void troca(int* vetor, int i, int j) 
{ 
   int temp = vetor[i]; 
   vetor[i] = vetor[j]; 
   vetor[j] = temp; 
} 

void bubbleSort(int vetor[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n - 1; i++) 
       for (j = 0; j < n - i - 1; j++) 
           if (vetor[j] > vetor[j + 1]) 
               troca(vetor, j, j + 1); 
} 

void ordenarArray(int vetor[], int size) 
{ 
   int i; 
   for (i = 0; i < size; i++) 
       printf("%d ", vetor[i]); 
   printf("\n"); 
} 

int main() 
{ 
   int vetor[] = {64, 25, 12, 22, 11, 9}; 
   int N = sizeof(vetor) / sizeof(vetor[0]); 
   bubbleSort(vetor, N); 
   printf("Array ordenado: "); 
   ordenarArray(vetor, N); 
   return 0; 
}