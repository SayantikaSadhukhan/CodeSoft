#include <iostream>

int main() {
    double num1, num2, result;
    char operation;

    // Input the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Input the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Choose the operation
    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> operation;

    // Perform the selected operation
    switch (operation) 
	{
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if the second number is not zero before performing division
            if (num2 != 0) 
			{
                result = num1 / num2;
            } else 
			{
                std::cout << "Error: Cannot divide by zero.\n";
                return 1; // Exit the program with an error code
            }
            break;
        default:
            std::cout << "Error: Invalid operation.\n";
            return 1; // Exit the program with an error code
    }

    // Display the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}
