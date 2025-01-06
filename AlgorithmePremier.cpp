#include <iostream>

int main() {
    int nombre;
    std::cout << "Entrez un nombre: ";
    std::cin >> nombre;

    bool estPremier = true;

    if (nombre <= 1) {
        estPremier = false;
    } else {
        for (int i = 2; i * i <= nombre; ++i) {
            if (nombre % i == 0) {
                estPremier = false;
                break;
            }
        }
    }

    if (estPremier) {
        std::cout << nombre << " est premier." << std::endl;
    } else {
        std::cout << nombre << " n'est pas premier." << std::endl;
    }

    return 0;
}