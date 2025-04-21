#include <iostream>
#include <cstdlib> /*srand, rand*/
#include <ctime>

int main()
{
    // std::srand(std::time(nullptr)); => use o tempo atual como semente para gerador aleatório
    std::srand(std::time({}));
    std::cout << std::time({}) << std::endl;
    int result = std::rand();
    std::cout << "número: " << result << std::endl;
    std::cout << "RAND_MAX = " << RAND_MAX << std::endl;

    // numero gerado esteja dentro de uma faixa de variação.
    int randon_number = randon_number % 10; // entre 1 e 10
    std::cout << "entre 1 e 10" << randon_number << std::endl;
    return 0;
}
