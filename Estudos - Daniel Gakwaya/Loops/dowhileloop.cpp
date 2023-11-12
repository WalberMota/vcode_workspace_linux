#include <iostream>

int main(int argc, char const *argv[])
{
    const unsigned int LIMITE{10};
    unsigned int i{11};//o iterator é maior do que a condição LIMTE porem o corpo do loop é executado assim mesmo, ao contrário de while loop onde a condição é testada antes do corpo do loop

    do
    {
        std::cout << "[" << i << "]: Eu amo c++" << '\n';
        ++i;
    } while (i < LIMITE);

    return 0;
}
