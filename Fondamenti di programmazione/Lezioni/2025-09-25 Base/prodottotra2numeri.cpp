#include <iostream>

int main(int argc, char **argv) {

    double num1;
    double num2;

    std::cout << "Inserisci un numero" << std::endl;
    std::cin >> num1;

    std::cout << "Inserisci un altro numero" << std::endl;
    std::cin >> num2;

    std::cout << num1 << " x " << num2 << " = " << num1 * num2 << std::endl;

}
