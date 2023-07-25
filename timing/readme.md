# Installation

The only dependency that this program has besides g++ is pandas. Pandas is a data-processing library
which helps with dealing with large quantities of data.
```pip install pandas```

# What will this program do?

1. This program will look for the following c++ files, compile them with g++ and then run them. ```timeit.cpp sorts.cpp sorts.h```
2. This program will time the algorithms for the following cases. Each generated case will be ran 10 times, and there will be 100 cases, which belong to each category.
   
   1. Fully Sorted Array
   2. Reverse Sorted Array
   3. Partially Sorted Array
   4. Randomly Generated Array
   5. Randomly Generated Array with Outliers

3. This file will then calculate the mean and standard deviation of the tests and output them to a ```tests/results.csv``` file. This program will then clean up all of the files that it had to generate (compiled g++, temp files, etc).

4. Finally, it is up to the user to perform a statistical analysis, though if granted more time, it would be great to have this program perform said analysis. 
