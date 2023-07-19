#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include "sort.h"

int main(int argc, char*argv[]) {
    Sorts sort;

    std::string fileName = argv[1];
    std::ifstream inputFile(fileName); 
    std::string line;
    std::getline(inputFile, line);
    std::istringstream data(line);

    int mode = std::stoi(argv[2]);
    sort.setMode(mode);

    int value;
    while (data >> value) {
        sort.insert(value);
    }


    sort.initializeVisual();

    return 0;
}
