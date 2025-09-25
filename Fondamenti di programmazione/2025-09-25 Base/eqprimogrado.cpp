#include <iostream>

int main(int argc, char **argv) {

    float a;
    float b;

    std::cout << "Inserisci il valore di a (deve essere diverso da 0)" << std::endl;
    std::cin >> a;

    std::cout << "Inserisci il valore di b (deve essere diverso da 0)" << std::endl;
    std::cin >> b;

    std::cout << "La soluzione dell'equazione e' : " << -b / a << std::endl;

}
