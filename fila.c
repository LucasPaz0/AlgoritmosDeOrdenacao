#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define TAMANHO_FILA 6

typedef struct
{
   int vetor[TAMANHO_FILA];
   int inicio;
   int fim;
}Fila;

void enfileirar(int valor, Fila* fila);
int desenfileirar(Fila* fila);

void enfileirar(int valor, Fila* fila)
{
   if(fila->fim < TAMANHO_FILA)
   {
       fila->vetor[fila->fim] = valor;
       fila->fim++;
   }
   else
   { 
       printf("Não há mais espaço na fila");
   }
}

int desenfileirar(Fila* fila)
{
   if(fila->inicio < fila->fim)
   {
       int valor = fila->vetor[fila->inicio];
       fila->inicio++;
       printf("%d ", valor);
       return valor;
   }
   else
   {
       printf("A fila está vazia. \n");
       return -1;
   }
}

void imprimirFila(Fila *fila)
{
   int i;

   for(i=fila->inicio; i<fila->fim; i++)
   {
       printf("%02d ", fila->vetor[i]);
   }
   printf("\n");
}

int main()
{
   Fila f;
   f.inicio = 0;
   f.fim = 0;

   enfileirar(64,&f); 
   enfileirar(25,&f); 
   enfileirar(12,&f); 
   enfileirar(22,&f); 
   enfileirar(11,&f); 
   enfileirar(9,&f); 

   printf("Enfileiramento: \n");

   imprimirFila(&f);

   printf("Ordem de desenfileiramento:\n");
   while(f.inicio < f.fim) 
   {
       desenfileirar(&f);
       sleep(1); 
   }
   printf("\n");

   return 0;
}