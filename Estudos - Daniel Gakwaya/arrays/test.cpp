#include <iostream>

int data[]{1, 2, 4, 5, 1, 8, 2, 3, 6, 1, 4, 2};
int seleciona[12]{};
int numero;
int i{0};
int main()
{
    seleciona[0] = data[0];

    do
    {

        if (seleciona[i] == data[i])
        {
            i++;
        }
        else
        {
            seleciona[i + 1] = data[i];
            i++;
        }

    } while (i < 12);

    // ler select[]
    for (size_t i{0}; i < 12; i++)
    {
        std::cout << seleciona[i] << " ";
    }
    return 0;
}
