#include <iostream>

int main() {
    int A, B;

    // Solicitar os números ao usuário
    std::cout << "Digite o valor de A: ";
    std::cin >> A;

    std::cout << "Digite o valor de B: ";
    std::cin >> B;

    // Realizar os cálculos
    int soma = A + B;
    int subtracao = A - B;
    int multiplicacao = A * B;
    int divisao = A / B;
    int resto = A % B;

    // Exibir os resultados
    std::cout << "Soma = " << soma << std::endl;
    std::cout << "Subtração = " << subtracao << std::endl;
    std::cout << "Multiplicação = " << multiplicacao << std::endl;
    std::cout << "Divisão = " << divisao << std::endl;
    std::cout << "Resto = " << resto << std::endl;

    return 0;
}
