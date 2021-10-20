#include <iostream>

template <class x>
int rearrange(x *vetor, int left, int right){
    x pivot = vetor[right];
    
    int j = left, i = left;
    for(; i<right; i++){
        if(vetor[i]<=pivot){
            std::swap(vetor[j], vetor[i]);
            j++;
        }
    }
    std::swap(vetor[j], vetor[i]);
    return j;
}

template <class x>
void quickSort(x *vetor, int left, int right){
    if(left < right){
        int r = rearrange(vetor, left, right);
        quickSort(vetor, left, r-1);
        quickSort(vetor, r+1, right);
    }
}