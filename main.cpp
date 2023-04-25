#include <iostream>

int main() {
    char op;
    float num1, num2;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch (op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
            break;
        case '/':
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
            break;
        default:
            std::cout << "Invalid operator\n";
            break;
    }

    return 0;
}
