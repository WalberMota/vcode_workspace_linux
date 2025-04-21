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
    int randon_number = result % 10; // entre 0 e 10
    std::cout << "Número entre 0 e 10: " << randon_number << std::endl;

    //Pede ao usuário para adivinhar o número

    std::cout << "Adivinhe o número de 0 a 10: ";

    int palpite;
    do
    {
        std::cin >> palpite;
        if (randon_number<palpite){
            std::cout <<"o número é menor... "<<std::endl;
        }
        if (randon_number>palpite){
            std::cout <<"o número é maior... "<<std::endl;
        }

    } while (palpite!=randon_number);
    
    std::cout <<"Paraben você acertou !"<<std::endl;

    return 0;
}
