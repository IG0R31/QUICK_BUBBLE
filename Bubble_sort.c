#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "pratos.h"

void bubbleSort(Prato pratos[], int n){
    for(int i=0 ; i<n-1; i++){
        for(int j=0; j<n-i-1 ;j++ ){
            if(pratos[j].prioridade > pratos[j + 1].prioridade ||
                (pratos[j].prioridade == pratos[j + 1].prioridade && pratos[j].tempo > pratos[j + 1].tempo)) {
                Prato temp= pratos[j];
                pratos[j] = pratos[j+ 1];
                pratos[j+1]= temp;
            }
        }

    }
}
int main(){
    
    Prato pratosOrdenados[num_pratos];
    memcpy(pratosOrdenados, pratos, sizeof(pratos));

    clock_t start_time = clock();

    bubbleSort(pratosOrdenados, num_pratos);
    
    clock_t end_time= clock();
    
    printf("\nPratos ordenados:\n");
    for(int  i=0; i< num_pratos; i++){
        printf("Prioridade: %d, Tempo: %d, Nome: %s\n", pratosOrdenados[i].prioridade, pratosOrdenados[i].tempo, pratosOrdenados[i].nome);
    }
    double elapsed_time = ((double)(end_time - start_time))/ CLOCKS_PER_SEC;
    printf("Tempo de execução: %f segundos\n", elapsed_time);
    return 0;

}