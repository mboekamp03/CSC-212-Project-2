CSC212 Project 2
---------------------

Summary
---------------------
The task of this project is to implement 4 different sorting algorithms: insertion sort, mergesort, quicksort, and an additional sorting algoriithm from our choosing that was not mentioned in class. Additionally, all sorting algorithms must be benchmarked and runtimes recorded using various inputs. 

Instructions
---------------------
SDL Visualizer:
---------------------
Detailed instructions covering all aspects can be found near the end of the report in the Appendix. Here is a quick breakdown of compiling the program.

1. Copy file titled visual.cpp from this repository and insert into a c++ file.

2. Use the following command to compile the code:
```
  g++  visual.cpp -o program -L /Library/Frameworks/SDL2.framework/Headers -F /Library/Frameworks/ -framework SDL2
```

3. There are four seperate modes with this file:

 0 -> Insertion Sort
 1 -> Merge Sort
 2 -> Quicksort
 3 -> Radix Sort


5. Run the code using the following command:
```
./program <file_name>.txt <mode>
```
