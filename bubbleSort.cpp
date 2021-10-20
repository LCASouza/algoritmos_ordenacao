#include <iostream>

template <class x>
void bubbleSort(x *vetor, int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1; j++){
            if(vetor[j]>vetor[j+1]){
                std::swap(vetor[i], vetor[j]);
            }
        }
    }
}