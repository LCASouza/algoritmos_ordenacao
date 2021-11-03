#include <iostream>
#include "bubbleSort.cpp"
#include "selectionSort.cpp"
#include "insertionSort.cpp"
#include "mergeSort.cpp"
#include "quickSortLast.cpp"
#include "heapSort.cpp"

using namespace std;

int main(){
    int vet[5], x;

    for(int i=0; i<5; i++){
        cin >> x;
        vet[i] = x;
    }

    //bubbleSort(vet, 5);
    //selectionSort(vet, 5);
    //insertionSort(vet, 5);
    //mergeSort(vet, 0, 5);
    //quickSort(vet, 0, 4);
    heapSort(vet, 5);

    for(auto i: vet){
        cout << i << " ";
    }
    printf("\n");
}