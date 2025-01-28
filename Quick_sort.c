#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "pratos.h"

void particao(Prato pratos[], int esq, int dir, int*i, int *j){
    *i = esq;
    *j = dir;
    Prato pivo = pratos[(esq+dir)/2];

    while(*i <= *j){
        while (pratos[*i].prioridade < pivo.prioridade && *i <= dir){
            (*i)++;
        }
        while (pratos[*j].prioridade > pivo.prioridade && *j >= esq){
            (*j)--;
        }
        if(*i <= *j){
            Prato aux = pratos[*i];
            pratos[*i] = pratos[*j];
            pratos[*j] = aux;
            (*i)++;
            (*j)--;
        }
    }
    
}
void Quicksort(Prato pratos[], int esq, int dir){
    int i, j;
    particao(pratos, esq, dir, &i, &j);
    if(i< dir){
        Quicksort(pratos, i, dir);
    }
    if(j> esq){
        Quicksort(pratos, esq, j);
    }
}

int main(){
    Prato pratosOrdenados[num_pratos];
    memcpy(pratosOrdenados, pratos, sizeof(pratos[0])* num_pratos);

    clock_t start_time= clock();
    Quicksort(pratosOrdenados, 0, num_pratos-1);
    clock_t end_time = clock();

    printf("\nPratos ordenados:\n");
    for(int  i=0; i< num_pratos; i++){
        printf("Prioridade: %d, Tempo: %d, Nome: %s\n", pratosOrdenados[i].prioridade, pratosOrdenados[i].tempo, pratosOrdenados[i].nome);
    }

    double elapsed_time = ((double)(end_time - start_time))/ CLOCKS_PER_SEC;
    printf("Tempo de execução: %f segundos\n", elapsed_time);
    return 0;

    
}