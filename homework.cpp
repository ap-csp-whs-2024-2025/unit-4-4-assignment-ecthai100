#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
    // Complete the homework problems here
    
    // Problem 1
    int number;
    std::cout << "Please enter a number 1 and 100: ";
    std::cin >> number;

    // Using a while loop to validate the input
    while (number < 1 || number > 100) {
        // If the entered number is invalid, display a message and prompt again
        std::cout << "Invalid number. Please enter a number between 1 and 100: ";
        std::cin >> number;
    }

        // Thank the user for their valid input
        std::cout << "Thank you for your input!" << std::endl;

    // Problem 2
    # Set my favourite color
    favorite_color = "blue"

    # initialize the guess counter
    attempts = 1

    guess = input("Guess my favourite color: ")

    while guess.lower() != favorite_color

    
    // Problem 3
    
    
    
    return 0;
}
