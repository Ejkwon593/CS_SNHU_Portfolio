/*
 * Eddy Kwon
 * CS 210 Project Three
 * Corner Grocer Item Tracking Program
 */

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <iomanip>

 // Function to prompt the user for the menu option
void displayMenu() {
    std::cout << "1. Look up item frequency\n"
        << "2. Print item frequencies\n"
        << "3. Print item frequency histogram\n"
        << "4. Exit\n"
        << "Enter your choice (1-4): ";
}

// Function to perform menu option one: Lookup item frequency
void lookupItemFrequency(const std::map<std::string, int>& itemFrequencies) {
    std::cout << "Enter the item to look up: ";
    std::string item;
    std::getline(std::cin, item);

    auto it = itemFrequencies.find(item);
    if (it != itemFrequencies.end()) {
        std::cout << "Frequency of " << item << ": " << it->second << std::endl;
    }
    else {
        std::cout << "Item not found." << std::endl;
    }
}

// Function to perform menu option two: Print all item frequencies
void printFrequencies(const std::map<std::string, int>& itemFrequencies) {
    for (const auto& pair : itemFrequencies) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}

// Function to perform menu option three: Print item frequency histogram
void printHistogram(const std::map<std::string, int>& itemFrequencies) {
    for (const auto& pair : itemFrequencies) {
        std::cout << std::setw(15) << std::left << pair.first
            << std::string(pair.second, '*') << std::endl;
    }
}

// Function to read items from the input file and count frequencies
void readItemsFromFile(const std::string& inputFile, std::map<std::string, int>& itemFrequencies) {
    std::ifstream file(inputFile);
    if (!file.is_open()) {
        std::cerr << "Error opening input file." << std::endl;
        return;
    }

    std::string item;
    while (file >> item) {
        itemFrequencies[item]++;
    }

    file.close();
}

// Function to write item frequencies to the backup file
void writeBackupFile(const std::map<std::string, int>& itemFrequencies, const std::string& backupFile) {
    std::ofstream outputFile(backupFile);
    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file." << std::endl;
        return;
    }

    for (const auto& pair : itemFrequencies) {
        outputFile << pair.first << " " << pair.second << std::endl;
    }

    outputFile.close();
}

int main() {
    std::map<std::string, int> itemFrequencies;

    // Read items from the input file and update frequencies
    readItemsFromFile("CS210_Project_Three_Input_File.txt", itemFrequencies);

    // Write the frequencies to the backup file
    writeBackupFile(itemFrequencies, "frequency.dat");

    int choice;
    do {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore(); // Ignore newline left in input buffer

        switch (choice) {
        case 1:
            lookupItemFrequency(itemFrequencies);
            break;
        case 2:
            printFrequencies(itemFrequencies);
            break;
        case 3:
            printHistogram(itemFrequencies);
            break;
        case 4:
            std::cout << "Exiting the program." << std::endl;
            break;
        default:
            std::cout << "Invalid option. Please try again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}
