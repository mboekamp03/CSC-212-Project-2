#include "gradebook.h"
#include <fstream>

//insertion sort function, where insertionSequence is the vector of size sizeN
void Sorts::insertionSort(vector <int> &insertionSequence, int sizeN){

    int i, j, k = 0;
    for (i = 1; i < sizeN; i++){
        j = i;
        k = insertionSequence[i];
        while (j > 0 and k < insertionSequence[j - 1]){
            insertionSequence[j] = insertionSequnece[j - 1];
            j--;
        }
        insertionSequence[j] = k;
    }
}


