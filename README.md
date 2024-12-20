# CS_SNHU_Portfolio
Portfolio for CS210 Project 210_Project_Three
Summarize the project and what problem it was solving:
This project involved building a program to track the frequency of grocery items purchased in a store. The store generates records of items purchased, and the goal was to analyze these records to identify how frequently each item is bought. The problem being solved is the need for the store to understand customer preferences in order to optimize the store layout, particularly in the produce section. The program accomplishes this by reading item data from a file, allowing users to look up the frequency of specific items, print all item frequencies, and display the frequency data as a text-based histogram.

What did you do particularly well?
I believe I did particularly well with the implementation of menu options and ensuring that the program’s functionality was modular. By breaking down the task into individual functions for each menu option, the program became easier to test, debug, and understand. Additionally, the use of a std::map allowed efficient lookups of item frequencies, and the histogram feature provided a simple yet clear representation of the data. The program’s logic is clear, and the flow works smoothly between the different options, making it user-friendly.

Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
There are several areas where I could improve the code:

Case Insensitivity for Item Lookup: While the program handles input case-sensitively, it could be enhanced by normalizing inputs to be case-insensitive. This would improve user experience, ensuring that searches for "Apple" or "apple" or "APPLE" all yield the same results.
Error Handling for File Input/Output: Although the code currently handles file output, adding more robust error messages or retry logic when file access fails would make the program more resilient and user-friendly. For example, if the input file isn't found, the program could offer to retry or create a new file.
Refactoring to Use OOP (Object-Oriented Programming): A more significant improvement would be refactoring the program to fully utilize Object-Oriented Programming principles. By encapsulating functionality into a class, I could demonstrate better use of inheritance, polymorphism, and encapsulation, making the code more adaptable and reusable.
Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
The most challenging part of the code was implementing the input/output functionality for handling the item frequency data. Specifically, ensuring that the user’s input was processed correctly and used efficiently in the lookup function took some time. I overcame this by researching how std::getline() works for capturing input with spaces and how to use std::transform() for case-insensitive string comparisons. I also utilized resources such as C++ documentation and Stack Overflow to troubleshoot issues and understand how to handle files correctly.

To continue improving, I’ve added documentation and online C++ forums to my support network. These resources will help me solve coding problems more effectively in future projects.

What skills from this project will be particularly transferable to other projects or coursework?
This project helped me develop strong skills in working with file I/O, handling user input, and using containers like std::map. These skills will be particularly useful in any future projects that involve storing, searching, and manipulating data. Understanding the importance of code modularity and testing is another transferable skill, as it’s a critical part of larger projects and coursework that require clear, readable code.

How did you make this program maintainable, readable, and adaptable?
To make the program maintainable and readable, I followed several best practices:

Modular Functions: I broke down the program into small, manageable functions that each handled one task (such as looking up item frequency or printing the histogram). This made the code easier to maintain and debug.
Clear Variable Names: I used descriptive names for variables and functions to make it clear what each part of the code was doing. For example, functions like lookupItemFrequency() and printFrequencies() are self-explanatory and make the code easier to follow.
In-Line Comments: I added comments explaining key parts of the code, especially where I was implementing specific logic, so that others (or my future self) can easily understand how the program works and why certain choices were made.
Error Handling: I included basic error handling, such as checking if the input file could be opened or if the user entered a valid option. This ensures the program runs smoothly even if an unexpected issue arises.
By following these practices, the program is not only readable and maintainable but also adaptable for future changes, such as adding new features or supporting additional item tracking.
