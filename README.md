CSC212 Project 2
---------------------

Summary
---------------------
The task of this project is to implement 4 different sorting algorithms: insertion sort, mergesort, quicksort, and an additional sorting algorithm from our choosing that was not mentioned in class. Additionally, all sorting algorithms must be benchmarked and runtimes recorded using various inputs. 

Planning
---------------------
We met multiple times over the weeks to discuss who would handle what algorithm, how we would share it visually and how to find the time complexity of each algorithm. Once we were able to use a visualizer we moved on to the presentation. This presentation will come to include graphs, comparisons and the logic behind the code. Once everything is set for our presentation and research we met again to record ourselves to see how efficiently we can discuss our findings. We would then divide up the report into pieces for us to begin and work together to fill any gaps for the report.

Instructions
---------------------
### Installation of SDL2 for SDL Visualization
#### Steps on macOS:

  Go to the SDL website: https://www.libsdl.org/
  
  Click SDL Releases under Downloads on the left side of the website, this will direct you to SDL’s latest release on GitHub
  
  Click the download that is correct for your computer
  
  To skip this step click the following for Macbooks: SDL2-2.28.1.dmg
  
  Clicking here will download the correct file
  
  From here, open a new finder window by right clicking the finder icon and selecting New Finder Window near the top
  
  On the top of your screen, select Go
  
  Then, select Go to Folder

  This will bring up a text box saying Go to Folder, click into this and paste the following: /Library/Frameworks 

  Hit enter, then you will see the Frameworks folder on your Macbook

  Go back to the open SDL2 file and drag the framework into the Frameworks folder

  For these next few steps, I am assuming that you have the compiler g++ installed as well as an IDE

  Open a new file and copy in the code located here

  You will see lots of errors, this is normal and to be expected from doing it this way because the install of SDL2 is not 
  
  completely linked to your IDE.

  Now, you are ready to compile

  When compiling, use this format, replacing the file name with the file of your choosing

  ```
  g++ <file_name>.cpp -o program -L /Library/Frameworks/SDL2.framework/Headers -F /Library/Frameworks/ -framework SDL2
  ```

  With our project, use the following line:

  ```
  g++  visual.cpp -o program -L /Library/Frameworks/SDL2.framework/Headers -F /Library/Frameworks/ -framework SDL2
  ```

  Once compiled, enter the following line into your terminal with the correct input file name and the correct mode:

  ```
  ./program <file_name>.txt <mode>
  ```

  There are four text files in the GitHub to be tested

  You can use the following modes:

  0: Insertion Sort

  1: Merge Sort

  2: Quicksort

  3: Radix Sort

  Now, after running, a separate window will open, showing a sort occuring

  ### Installation of Timing Program

  Install a python interpreter, and the g++ compiler

  If you do not have the python pandas package installed, install it with `pip install pandas`

  Download the repo as a zip file from the Github Repository

  Make any necessary changes within the file… e.g. change number of times to run each test, change test conditions… 

  Open the terminal

  `cd {CSC212REPO}/timing`

  `python main.py`

  Wait for the program to finish, and then you will find `.csv` files inside of a `./tests` directory, which reports the   time that it took to sort each array.



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
