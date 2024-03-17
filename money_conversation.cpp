#include <iostream>

// using namespace std;

/* 
CONVERSION RATE NOTES 
- USD to Pesos
1 USD = 20.70 Pesos
- USD to Reais
1 USD = 5.12 Reais
- USD to Soles
1 USD = 4.01 Soles
*/

double PesosToUsd (double inp) {
    double rate = 20.70;
    double usd = inp / rate;
    return usd;
}

double ReaisToUsd (double inp) {
    double rate = 5.12;
    double usd = inp / rate;
    return usd;
}

double SolesToUsd (double inp) {
    double rate = 4.01;
    double usd = inp / rate;
    return usd;
}

int main () {

    int pesos, reais, soles;

    std::cout << "Enter number of Colombian Pesos:\n> ";
    std::cin >> pesos;

    std::cout << "Enter number of Brazilian Reais:\n> ";
    std::cin >> reais;

    std::cout << "Enter number of Peruvian Soles:\n> ";
    std::cin >> soles;

    double dollars = 0;

    dollars += PesosToUsd(pesos);
    dollars += ReaisToUsd(pesos);
    dollars += SolesToUsd(pesos);

    std::cout << std::endl << "---------------------------" << std::endl;
    std::cout << "YOUR TOTAL BALANCE IN USD:" << std::endl;

    std::cout << dollars << " $" << std::endl;

    return 0;
}
