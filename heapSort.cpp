#include <iostream>

template <class x>
void criaHeap(x *vetor, int i, int f){
    int aux = vetor[i];
    int j = i*2+1;
    while(j<=f){
        if(j<f){
            if(vetor[j]<vetor[j+1]){
                j+=1;
            }
        }

        if(aux < vetor[j]){
            vetor[i] = vetor[j];
            i=j;
            j=2*i+1;
        }
        else{
            j=f+1;
        }
    }
    vetor[i]=aux;
}

template <class x>
void heapSort(x *vetor, int n){
    for(int i=(n-1)/2; i>=0; i--){
        criaHeap(vetor, i, n-1);
    }
    for(int i=n-1; i>=1; i--){
        std::swap(vetor[0], vetor[i]);
        criaHeap(vetor, 0, i-1);
    }
}