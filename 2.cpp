#include <iostream>
#include <string>

// Function to remove a given word from a string
std::string removeWordFromString(const std::string& input, const std::string& wordToRemove) {
    std::string result = input;
    size_t found = result.find(wordToRemove);

    while (found != std::string::npos) {
        // Erase the found word from the string
        result.erase(found, wordToRemove.length());

        // Search for the next occurrence
        found = result.find(wordToRemove, found);
    }

    return result;
}

int main() {
    std::string inputString = "vinayak and trepankar";
    std::string wordToRemove = "and";

    // Call the function to remove the word
    std::string modifiedString = removeWordFromString(inputString, wordToRemove);

    std::cout << "Original String: " << inputString << std::endl;
    std::cout << "Modified String: " << modifiedString << std::endl;

    return 0;
}