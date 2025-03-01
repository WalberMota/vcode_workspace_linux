#include <iostream>

int data[]{1, 2, 4, 5, 1, 8, 2, 3, 6, 1, 4, 2};
int seleciona[12]{};
int numero;

int main(int argc, char const *argv[])
{
    seleciona[0] = data[0];

    for (int i = 0; i < 12; i++)
    {
        if (seleciona[i] == data[i + 1])
        {
            continue;
        }
        else
        {
            seleciona[i + 1] = data[i + 1];
        }
    }

    // ler select[]
    for (size_t i{0}; i < 12; i++)
    {
        std::cout << seleciona[i] << " ";
    }
    return 0;
}
