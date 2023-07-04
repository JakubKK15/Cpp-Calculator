# Simple Command Line C++ Calculator

This is a simple command line calculator implemented in C++. It can perform basic arithmetic operations such as addition, subtraction, multiplication, and division.

## Usage

1. Make sure you have a C++ compiler installed on your system (e.g., g++ for Linux/macOS, MinGW for Windows).
2. Save the calculator code into a file, e.g., `calculator.cpp`.
3. Open a terminal or command prompt.
4. Navigate to the directory where you saved the `calculator.cpp` file.
5. Compile the code using the C++ compiler. For example, with g++, run the following command:

   ```bash
   g++ calculator.cpp -o calculator
If the compilation is successful, an executable file named calculator will be created.

Run the calculator by typing the following command:

```bash
./calculator
```
The calculator will prompt you to enter the first number, operator, and second number.

After entering the required inputs, the calculator will display the result.

To exit the calculator program, press the close button like you would a browser/any other app.

## Notes
This calculator does not handle advanced features such as parentheses or operator precedence. It performs operations in the order they are entered.
Division by zero is not allowed, and attempting to divide by zero will result in an error message.
If an invalid operator is entered, the calculator will display an error message.
Feel free to modify and enhance the calculator code to suit your specific needs.
