/*
Programa:datahoraatual.cpp
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 12/10/2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Cria uma pirâmide no terminal com altura determinada pelo usuário.
*/
#include <iostream>


// prototipo das funções
int obter_tamanho();
void piramide(int altura);

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

    } while (n <1);

    return n;
}

void piramide(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k <= size-i; k++)//espaços em branco antes dos tijolos
        {
            std::cout << " ";
        }

        for (int j = 0; j <= i; j++)//tijolos do lado esquerdo
        {

            std::cout << "#";
        }
        std::cout << "  ";//espaço entre os tijolos

        for (int j = 0; j <= i; j++)//tijolos do lado direito
        {
            std::cout << "#";
        }

        std::cout << "\n";
    }
}
