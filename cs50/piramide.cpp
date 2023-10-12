#include <iostream>
#include <unistd.h>

// prototipo das funções
int obter_tamanho();
void piramide(int altura);

// int altura{0};

int main(void)
{

    // pega a altura da piramide
    int altura = obter_tamanho();

    // Função para Construir a piramide
    piramide(altura);

    return 0;
}

int obter_tamanho()
{
    int n;
    do
    {
        system("clear");
        std::cout << "Digite a altura da pirâmide: ";
        std::cin >> n;

    } while (n <= 0);

    return n;
}

void piramide(int size)
{
    for (int i = 0; i < size; i++)
    {
        /*     for(int j=size;j>=i;j--)
            {
                std::cout<<"#";

            } */
        for (int k = 0; k <= size-i; k++)
        {
            std::cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {

            std::cout << "#";
        }
        std::cout << "  ";
        for (int j = 0; j <= i; j++)
        {
            std::cout << "#";
        }

        std::cout << "\n";
    }
}
