#include <iostream>
#include <string>

int main()
{
    float firstInput, secondInput;
    char userOperator;

    while (true) {
        std::cout << "Enter number 1: ";
        std::cin >> firstInput;
        std::cout << "Enter operator(+, -, *, /): ";
        std::cin >> userOperator;
        std::cout << "Enter the second number: ";
        std::cin >> secondInput;

        switch (userOperator) {
        case '+':
            std::cout << "The result is: " << firstInput + secondInput << std::endl;
            break;
        case '-':
            std::cout << "The result is: " << firstInput - secondInput << std::endl;
            break;
        case '*':
            std::cout << "The result is: " << firstInput * secondInput << std::endl;
            break;
        case '/':
            if (secondInput == 0) {
                std::cout << "You can't divide by 0!" << std::endl;
                return 1;
            }
            std::cout << "The result is: " << firstInput / secondInput << std::endl;
        default:
            std::cout << "An unknown error has occurred!" << std::endl;
            return 1;
            break;
        }
    }

    return 0;
}
