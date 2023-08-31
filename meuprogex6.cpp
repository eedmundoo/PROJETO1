#include <iostream>

int main() {
    double A, B;

    // Solicitar os números ao usuário
    std::cout << "Digite o valor de A: ";
    std::cin >> A;

    std::cout << "Digite o valor de B: ";
    std::cin >> B;

    // Realizar os cálculos
    double soma = A + B;
    double subtracao = A - B;
    double multiplicacao = A * B;
    double divisao = A / B;

    // Exibir os resultados
    std::cout << "Soma = " << soma << std::endl;
    std::cout << "Subtração = " << subtracao << std::endl;
    std::cout << "Multiplicação = " << multiplicacao << std::endl;
    std::cout << "Divisão = " << divisao << std::endl;

    return 0;
}
