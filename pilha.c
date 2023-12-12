#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define TAMANHO_PILHA 6

typedef struct
{
   int vetor[TAMANHO_PILHA];
   int topo;
} Pilha;

void empilhamento(int valor, Pilha* pilha);
int desempilhamento(Pilha* pilha);

void empilhamento(int valor, Pilha* pilha)
{
   if(pilha->topo < TAMANHO_PILHA)
   {
       pilha->vetor[pilha->topo] = valor;
       pilha->topo++;
   }
   else
   {
       printf("Não há mais espaço na pilha");
   }
}

int desempilhamento(Pilha* pilha)
{
   if(pilha->topo > 0)
   {
       pilha->topo--;
       printf("Número retirado da pilha: %d\n", pilha->vetor[pilha->topo]);
   }
   else
   {
       printf("A pilha está vazia. \n");
   }
   return pilha->vetor[pilha->topo];
}

void imprimirPilha(Pilha *pilha)
{
   int i;

   for(i=0; i<pilha->topo; i++)
   {
       printf("%02d\n", pilha->vetor[i]);
   }
}

int main()
{
   Pilha p;
   p.topo = 0;

   empilhamento(64, &p); 
   empilhamento(25, &p); 
   empilhamento(12, &p); 
   empilhamento(22,&p); 
   empilhamento(11, &p); 
   empilhamento(9, &p); 
   printf("Pilha: \n");

   imprimirPilha(&p);

   printf("Ordem de desempilhamento:\n");
   while(p.topo > 0) 
   {
       desempilhamento(&p);
       sleep(1);
   }

   return 0;
}
