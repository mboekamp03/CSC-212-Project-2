#include "sorts.h"
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

void Sorts::mergeSort(std::vector<int>& arr, int left, int mid, int right) {
    int i = left;       // Index for left subarray
    int j = mid + 1;    // Index for right subarray
    int k = 0;          // Index for temporary array

    std::vector<int> temp(right - left + 1); // Temporary array

    // Merge the two subarrays into the temporary array
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    // Copy the remaining elements of the left subarray, if any
    while (i <= mid)
        temp[k++] = arr[i++];

    // Copy the remaining elements of the right subarray, if any
    while (j <= right)
        temp[k++] = arr[j++];

    // Copy the merged elements back to the original array
    for (i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];
}



