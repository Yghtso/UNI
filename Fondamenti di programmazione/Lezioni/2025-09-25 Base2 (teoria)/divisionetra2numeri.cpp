#include <iostream>

int main(int argc, char **argv) {

    int num1;
    int num2;

    std::cout << "Inserisci il dividendo" << std::endl;
    std::cin >> num1;

    std::cout << "Inserisci il divisore (deve essere diverso da 0)" << std::endl;
    std::cin >> num2;

    std::cout << "La parte intera del quoziente e' : " << num1 / num2 << std::endl;
    std::cout << "Il resto della divisione intera e' : " << num1 % num2 << std::endl;

}
