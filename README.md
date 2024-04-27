"# Project-3---CornerGrocer" 

This CPP project reads the contents of a separate .txt file with grocery data and saves the name of the item (i.e. spinach, radishes, etc.) and their frequency within the file to a set.The user then has various options to select from a main menu. Option 1 allows the user to search for an item by name, with the program displying the name of the item (if found) as well as the frequency of that item within the set. By selecting Option 2, the user can display all items and frequencies. Option 3 performs the same function of option 2, but visually represents the frequencies via a histogram. Finally, Option 4 serves as the command to exit the program.Upon successfully opening the .txt file, the program creates a backdup .dat file of all item names and freqencies. 

The problem the program solves is that it condenses external data and returns an organized list and frequency of each occurance of any given item name in the data. This program utilises a set to ensure all elements remain unique, accessible, and dynamic as the external data file may undergo changes (i.e. increase/decrease in inventory). This ensures the data can be maintained and easily shared via a backup file.

One thing I believe I implemented well was the use of input validation. The program will not take character input or integer input beyond the the chopices 1-4, and uses a throw catch statement to prompt the user to input only valid responses for the corresponding choices within the main menu. This enusres that the program does not crash or infinitely loop, as the program accounts for all potential invalid entries and correctly loops until the user is ready to exit the program.  

Identifiable places to improve the code include fully implementing the "removeItem" function, as this function would logically be included in an inventory program such as this, but was not a priority in the program's creation. This function was included in the header file, but was not necessary for the project's intended functionality. In the future, this could add to the program's efficiency in handling data manipulation depending on the needs of the user. 

The biggest challenge in developing this program was handling the logic for pointer usage while inputting data within the set. Pointers serve as powerful tools to aid in memory management, but tend to be one of the tougher aspects of the C++ programming language from a learner's persepctive. While initially confusing, I overcame this challenge by familiarizing myself with the fundamentals of pointers, reminding myself that pointers "point" to a memory location and working backwards to establish the logic of how and where to call that address for the program's functions. Now that I have a basic understanding of pointers, I aim to implemnt them in my future programming, as mastery of pointers is a key indication of a capable and efficent C++ programmer.

The skills from this project that transfer to other projects or course work include proper use of handling input validation and exception handling, the proper use of reading from and writing to files, and establishing clear logic for how to update a set type data structure for handling unique elements. These are all very common elements in various programs, and this project served as a great opportunity to use all of them at once, especially when considering the exact point in the program that each occurs and why knowing the best place to use each was instrumental in creating an efficeint program. 

This code was constructed to be maintainable, readable, and adaptable most notably in the object-oriented prgramming approach to encapsulate data. The program uses a header file to declare program functions, a cpp file for establishing the functionality of the functions, and finally a source or "main" cpp file to call these methods and interact with the user in an effort to promote data abstraction. The program contains comments in the header file that detail what each function does in the program, and follows common coding format guidelines to remain as readible as possible.   
