#include <iostream>
#include <vector>
#include <SDL2/SDL.h>
#include <random>
#include <string>

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

    int SCREEN_WIDTH = 800;
    int SCREEN_HEIGHT = 600;
    int FRAME_DELAY = 100;
    int GAP = 2;

    int mode;

public:
    //insertions sort methods
    void insertionSort(std::vector<int> &insertionSequence, int n, SDL_Renderer *renderer);

    //mergesort methods
    void merge(std::vector<int> &arr, int left, int mid, int right);
    void mergeSort(std::vector<int> &arr, int left, int right, SDL_Renderer *renderer);

    //quicksort methods
    int quickSort(std::vector <int> *quick, int left, int right, SDL_Renderer *renderer);
    void r_quicksort(std::vector<int> *quick, int left, int right, SDL_Renderer *renderer);

    // radix sort methods
    void radixSort(std::vector<int> &radixSequence, int n, SDL_Renderer *renderer);

    // Fill sequence vector
    void insert(int num);

    // Intialize all Vectors
    void intializeVectors(std::vector<int> sequence);

    // Visualizer
    bool initializeSDL(SDL_Window *&window, SDL_Renderer *&renderer);
    void handleEvents(bool &quit);
    void renderArray(SDL_Renderer *renderer, const std::vector<int> &arr);
    void initializeVisual();

    // Mode
    void setMode(int givenMode);
};
