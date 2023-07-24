CSC212 Project 2
---------------------

Summary
---------------------
The task of this project is to implement 4 different sorting algorithms: insertion sort, mergesort, quicksort, and an additional sorting algoriithm from our choosing that was not mentioned in class. Additionally, all sorting algorithms must be benchmarked and runtimes recorded using various inputs. 

Planning
---------------------
We met multiple times over the weeks to discuss who would handle what algorithm, how we would share it visually and how to find the time complexity of each algorithm. Once we were able to use a visualizer we moved on to the presentation. This presentation will come to include graphs, comparisons and the logic behind the code. Once everything is set for our presentation and research we met again to record ourselves to see how efficiently we can discuss our findings. We would then divide up the report into pieces for us to begin and work together to fill any gaps for the report.


SDL Visualizer:
---------------------
Detailed instructions covering all aspects can be found near the end of the report in the Appendix. Here is a quick breakdown of compiling the program. This breakdown works only after you have installed the SDL download and moved SDL frameworks into the frameworks folder of your MacBook.

1. Copy file titled visual.cpp from this repository and insert into a c++ file.

2. Use the following command to compile the code:
```
  g++  visual.cpp -o program -L /Library/Frameworks/SDL2.framework/Headers -F /Library/Frameworks/ -framework SDL2
```

3. There are four separate modes with this file:

     0 -> Insertion Sort
 
     1 -> Merge Sort
 
     2 -> Quicksort
 
     3 -> Radix Sort


5. Run the code using the following command:
```
./program <file_name>.txt <mode>
```

6. After running the code, you will see a new window open containing the sort visualizer
