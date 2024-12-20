# CS_SNHU_Portfolio
Portfolio for CS210 Project 210_Project_Three
1. Summarize the project and what problem it was solving:
The project was designed to help a grocery store track the frequency of items purchased by customers. It reads an input file containing purchased items, counts how many times each item appears, and allows the user to look up the frequency of individual items. The program also prints all item frequencies and visualizes the frequency distribution in a text-based histogram format.

2. What did you do particularly well?
I implemented a functional and clean solution that meets the core requirements. The user can look up item frequencies, print all frequencies, and see a histogram of item frequencies. Using std::map ensured that the items were sorted alphabetically, which helped keep the output organized and readable. The code also correctly writes item frequencies to a backup file (frequency.dat), ensuring data persistence.

3. Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
I could improve the user experience by adding case insensitivity to the item look-up feature. This would prevent issues if a user types in the item name in uppercase or mixed case. For example, "Apples" and "apples" should return the same result. Additionally, sorting the items in the histogram by descending frequency would make the output more intuitive by highlighting the most popular items first.

4. Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
The most challenging part was implementing the frequency lookup, particularly ensuring that the program handles user input robustly. I overcame this by making use of std::map to store the item frequencies efficiently and implemented basic error handling for incorrect item names. For future improvements, I plan to leverage online forums, reference materials like C++ documentation, and additional tools to refine input handling.

5. What skills from this project will be particularly transferable to other projects or coursework?
This project helped me strengthen my skills in working with file I/O, using data structures like std::map, and implementing user-friendly command-line interfaces. These skills are directly transferable to other programming projects where managing and processing data efficiently is essential, especially when dealing with large datasets or requiring fast lookups.

6. How did you make this program maintainable, readable, and adaptable?
I used modular design by splitting the functionality into different functions for specific tasks, like looking up item frequencies and printing the histogram. This made the code easier to follow and allowed me to make changes to each part of the program independently. I also ensured that the code was clear by using descriptive variable names and adding comments to explain key sections of the code. However, I could have added more in-line comments for better readability and clarity.
