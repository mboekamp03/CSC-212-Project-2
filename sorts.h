#include <iostream>
#include <vector>


class Sorts {

private:

    // Vectors 
    std::vector<int> sequence;
    std::vector<int> insertionSequence;
    std::vector<int> mergeSequence;
    std::vector<int> quickSequence;
    std::vector<int> radixSequence;


    // Variables
    int sizeN;
    int hi;
    int mid;
    int low;


public:
    //insertions sort methods
    void insertionSort(std::vector<int> &insertionSequence, int n);

    //mergesort methods
    void merge(std::vector<int> &arr, int left, int mid, int right);

    void mergeSort(std::vector<int> &arr, int left, int right);

    //quicksort methods
    //void
    void quickSort(std::vector <int> * quick, int left, int right);
    void r_quicksort(std::vector<int> *quick, int left, int right);

    // radix sort methods
    void radixSort(std::vector<int> &radixSequence, int n);

};
