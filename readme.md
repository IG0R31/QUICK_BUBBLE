ANALISE DO  TRABALHO QUICK SORT & BUBBLE SORT

Aqui estarei fazendo uma breve análise do que implementei para fazer o trabalho deste semestre. O trabalho foi dividido em três partes: a implementação de um arquivo .h que  contém  uma sequência de (3.10^5) pratos aleatórios, para realizar a ordenação deles utilizando Bubble Sort e Quick Sort.

*O arquivo pratos.h foi gerada de forma aleatória pela ferramenta BlackBox.AI .* 


DESCREVENDO AS PERFORMANCES: 

Por possuir um tipo de complexidade Θ(n log2 n), o algoritmo Quick Sort obteve um melhor resultado em relação ao Bubble sort. Operando com uma sequência de análise em relação ao pivô, o algoritmo a seguir: 

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

Este código implementa a função de partição do (void quickSort()). Ele é responsável por reorganizar os elementos de um array (ou subarray) em torno de um pivô, de forma que:

° Todos os elementos menores que o pivô fiquem à sua esquerda.
° Todos os elementos maiores que o pivô fiquem à sua direita.

As ordenações [i] e [j] são ponteiros de índices são utilizados para percorrer o arquivo  e realizar as devidas trocas, isso acontece dentro do loop. Isso em análise com as prioridades de número, tempo e nome. 

A execução do void quickSort() existe após do void particao() e é responsável por realizar a ordenação do arquivo.


Em contrapartida a função Bubble Sort, que possui uma complexidade de Θ(n^2), obteve um resultado inferior porém possui uma complexidade de tempo linear, ou seja, o tempo de execução é linear em relação ao tamanho do arquivo. 

O código que realizei utiliza dois loops aninhados. O loop externo intera sobre os dados, enquanto o loop interno compara elementos adjacentes: 

    void bubbleSort(Prato pratos[], int n){
        for(int i=0 ; i<n-1; i++){
            for(int j=0; j<n-i-1 ;j++ ){
                if(pratos[j].prioridade > pratos[j + 1].    prioridade ||
                (pratos[j].prioridade == pratos[j + 1].prioridade && pratos[j].tempo > pratos[j + 1].tempo)) {
                Prato temp= pratos[j];
                pratos[j] = pratos[j+ 1];
                pratos[j+1]= temp;
            }
        }
    }


Para cada par de pratos adjacentes, o algoritmo verifica se o prato atual (pratos[j]) tem uma prioridade maior do que o próximo (pratos[j + 1]). Se sim, ou se as prioridades são iguais mas o tempo do prato atual é maior que o do próximo, os dois pratos são trocados de lugar.