#include <SDL2/SDL.h>
#include <iostream>
#include <vector>
#include <random>

// Window dimensions
// variables are global so they can be adjusted easily
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

// Delay in milliseconds between each frame update
const int FRAME_DELAY = 50;

// Function to initialize SDL and create a window
bool initializeSDL(SDL_Window *&window, SDL_Renderer *&renderer) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
        return false;
    }

    window = SDL_CreateWindow("Merge Sort Visualization", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        std::cerr << "Window creation failed: " << SDL_GetError() << std::endl;
        return false;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) {
        std::cerr << "Renderer creation failed: " << SDL_GetError() << std::endl;
        return false;
    }

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    return true;
}

// Function to handle SDL events
void handleEvents(bool &quit) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            quit = true;
        }
    }
}

// Function to render the current state of the array
void renderArray(SDL_Renderer *renderer, const std::vector<int> &arr) {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    const int barWidth = SCREEN_WIDTH / arr.size();
    const int maxHeight = SCREEN_HEIGHT - 20;

    for (size_t i = 0; i < arr.size(); ++i) {
        const int barHeight = (arr[i] * maxHeight) / *std::max_element(arr.begin(), arr.end());
        const int x = i * barWidth;
        const int y = SCREEN_HEIGHT - barHeight;

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_Rect rect = {x, y, barWidth, barHeight};
        SDL_RenderFillRect(renderer, &rect);
    }

    SDL_RenderPresent(renderer);
}

// Merge function for merge sort
void merge(std::vector<int> &arr, int left, int mid, int right) {
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

// Merge sort function
void mergeSort(std::vector<int> &arr, int left, int right, SDL_Renderer *renderer) {
    if (left < right) {
        int mid = left + (right - left) / 2; // Calculate the mid-point

        // Recursively divide the array into two halves
        mergeSort(arr, left, mid, renderer);
        mergeSort(arr, mid + 1, right, renderer);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }

    renderArray(renderer, arr);
    SDL_Delay(FRAME_DELAY);
}

int main() {
    SDL_Window *window = nullptr;
    SDL_Renderer *renderer = nullptr;

    if (!initializeSDL(window, renderer)) {
        return 1;
    }

    bool quit = false;

    // std::random_device random;
    // std::uniform_int_distribution<int> distribution(1,99);
    // std::vector<int> arr;

    // for (int i = 0; i < 100; i++) {
    //     arr.push_back(distribution(random));
    // }

    // std::cout << "{";
    // for (int i = 0; i < arr.size(); i++) {
    //     std::cout << arr[i] << ", ";
    // }
    // std::cout << "}" << std::endl;

    // std::vector<int> arr = {9, 5, 2, 7, 1, 8, 6, 3, 4, 10, 15, 12, 14, 11, 13, 18, 20, 17, 16, 19, 25, 22, 24, 21, 23, 30, 27, 59, 26, 28};
    std::vector<int> arr = {9, 5, 2, 7, 1, 8, 6, 3, 4, 10};

    while (!quit) {
        handleEvents(quit);
        mergeSort(arr, 0, arr.size() - 1, renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
