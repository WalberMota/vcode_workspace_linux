#include <iostream>

int main(int argc, char const *argv[])
{
    int num_aleatorio = std::rand();
    std::cout << "numero aleatório = " << num_aleatorio << std::endl;

    num_aleatorio = std::rand();
    std::cout << "numero aleatório = " << num_aleatorio << std::endl;

    std::cout << "RAND_MAX = " << RAND_MAX << std::endl;

    num_aleatorio = std::rand() % 11;//entre 0-10
    std::cout << "numero aleatório = " << num_aleatorio << std::endl;

    for (size_t i{}; i < 10; i++)
    {
        num_aleatorio = std::rand() % 11;
        std::cout << "numero aleatório = " << num_aleatorio << std::endl;
    }

    std::cout <<std::endl;
    num_aleatorio = (std::rand() % 6)+1;//entre 1-6
    std::cout << "numero aleatório = " << num_aleatorio << std::endl;

    for (size_t i{}; i < 10; i++)
    {
        num_aleatorio = (std::rand() % 6)+1;
        std::cout << "numero aleatório = " << num_aleatorio << std::endl;
    }

    return 0;
}
