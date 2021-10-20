#include <iostream>

template <class x>
void insertionSort(x *vetor, int size){
    for(int i=1; i<size; i++){
        x k = vetor[i];
        int j = i-1;
        for(; j>=0 && vetor[j]>k; j--){
            vetor[j+1] = vetor[j];
        }
        vetor[j+1] = k;
    }
}