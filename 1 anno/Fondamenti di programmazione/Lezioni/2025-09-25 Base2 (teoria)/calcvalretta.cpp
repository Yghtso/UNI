#include <iostream>

int main(int argc, char **argv) {

    float coefficente;
    float costante;
    float x;

    std::cout << "Inserisci il valore di a" << std::endl;
    std::cin >> coefficente;

    std::cout << "Inserisci il valore di b" << std::endl;
    std::cin >> costante;

    std::cout << "Inserisci il valore di x" << std::endl;
    std::cin >> x;

    std::cout << "Il valore dell' ordinata y e' : " << coefficente * x + costante << std::endl;

}
