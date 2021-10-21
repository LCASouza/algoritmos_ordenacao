#include <iostream>

template <class x>
void merge(x *vetor, int esquerda, int meio, int direita){
    int esq = meio - esquerda, dir = direita - meio;
    x vetorEsquerda[esq], vetorDireita[dir];

    for(int i=0; i<esq; i++){
        vetorEsquerda[i] = vetor[esquerda+i];
    }
    for(int i=0; i<dir; i++){
        vetorDireita[i] = vetor[meio+i];
    }

    for(int k = esquerda, topoEsq=0, topoDir=0; k<direita; k++){
        if(topoEsq>=esq){
            vetor[k] = vetorDireita[topoDir];
            topoDir++;
        }
        else if(topoDir>=dir){
            vetor[k] = vetorEsquerda[topoEsq];
            topoEsq++;
        }
        else if(vetorDireita[topoDir]>vetorEsquerda[topoEsq]){
            vetor[k] = vetorEsquerda[topoEsq];
            topoEsq++;
        }
        else{
            vetor[k] = vetorDireita[topoDir];
            topoDir++;
        }
    }
}

template <class x>
void mergeSort(x *vetor, int esquerda, int direita){
    if(direita - esquerda > 1){
        int meio = (direita + esquerda)/2;

        mergeSort(vetor, esquerda, meio);
        mergeSort(vetor, meio, direita);
        merge(vetor, esquerda, meio, direita);
    }
}