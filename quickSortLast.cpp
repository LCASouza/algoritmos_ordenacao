#include <iostream>

template <class x>
int partition(x *vetor, int esquerda, int direita){
    x pivot = vetor[direita];
    
    int esq = esquerda, dir = esquerda;
    for(; dir<direita; dir++){
        if(vetor[dir]<=pivot){
            std::swap(vetor[esq], vetor[dir]);
            esq++;
        }
    }
    std::swap(vetor[esq], vetor[dir]);
    return esq;
}

template <class x>
void quickSort(x *vetor, int esquerda, int direita){
    if(esquerda < direita){
        int r = partition(vetor, esquerda, direita);
        quickSort(vetor, esquerda, r-1);
        quickSort(vetor, r+1, direita);
    }
}