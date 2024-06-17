#include <iostream>
#include <string>

int main() {
    // Declare variables for the input strings and the result
    std::string str1, str2, result;
    
    // Loop to take inputs and concatinate strings three times
    for (int i = 0; i < 3; ++i) {
        std::cout << "Enter the first string: ";
        std::getline(std::cin, str1); // Use getline to handle spaces
        
        // Prompt user for the second string input
        std::cout << "Enter the second string: ";
        std::getline(std::cin, str2);
        
        // Concatinate the two strings
        result = str1 + str2;
        
        // Output the concatinate result
        std::cout << "Concatinated string: " << result << std::endl;
        
        // Separator line for readability
        std::cout << "____________________________" << std::endl;
    }
    
    // Return 0 indicate successful execution
    return 0;
}