#include "sorts.h"
#include <fstream>

//insertion sort function, where insertionSequence is the vector of size sizeN
void Sorts::insertionSort(std::vector <int> &insertionSequence, int sizeN){

    int i, j, k = 0;
    for (i = 1; i < sizeN; i++){
        j = i;
        k = insertionSequence[i];
        while (j > 0 and k < insertionSequence[j - 1]){
            insertionSequence[j] = insertionSequence[j - 1];
            j--;
        }
        insertionSequence[j] = k;
    }
}

void Sorts::merge(std::vector<int>& arr, int left, int mid, int right) {
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

 void Sorts::mergeSort(std::vector<int>& arr, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2; // Calculate the mid-point

            // Recursively divide the array into two halves
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);

            // Merge the sorted halves
            merge(arr, left, mid, right);
        }
    }


/**
* This is radix sort. Radix sort is used to sort arrays of numbers that all have
* the same number of digits. This sort is NOT recommended on numbers of varying
* lengths.
* @param unsorted
* @param numDigits
* @return void
*/
void Sorts::radixSort(std::vector<int> &arr, int numDigits) {

    for (int i = 0 ; i < numDigits ; i++) {

        // create empty containers that we will organize into
        std::vector< std::vector<int> > containers(10);

        // for num in arr
        for (int v : arr)
            containers[(v / (int)std::pow(10, i)) % 10].push_back(v);

        // clear out arr
        arr.clear();

        // Rinse & Repeat
        for (const std::vector<int> &c : containers)
            arr.insert(arr.end(), c.begin(), c.end());

    }

}

