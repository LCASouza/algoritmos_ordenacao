#include <iostream>

template <class x>
void selectionSort(x *vetor, int size){
    int min;

    for(int i=0; i<size; i++){
        min = i;
        for(int j=i+1; j<size; j++){
            if(vetor[j]<vetor[min]){
                min = j;
            }
        }
        std::swap(vetor[i], vetor[min]);
    }
}