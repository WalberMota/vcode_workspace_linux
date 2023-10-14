#include <iostream>
#include <string>

// prototipo da função.
int indice_letra(int lenght);


// Variável para acumular os valores encontrados no array valor_letra
int soma;

// Tabela de Arrays de controle
int valor_letra[26] = {1, 5, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 2, 1, 4, 4, 8, 4, 6};
char alfabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char caixa_baixa;
std::string palavra_player1;

int main(int argc, char const *argv[])
{
    system("clear");

    std::cout << "Jogador 1\nDigite uma palavra: ";
    std::cin >> palavra_player1;

    for (int x = 0; x < palavra_player1.length(); x++)
    {
        palavra_player1[x] = char(tolower(palavra_player1[x]));
    }
    std::cout << "\nEm minuscula= "<< palavra_player1<<'\n';

    int tamanho_palavra = palavra_player1.length();

    indice_letra(tamanho_palavra);

    return 0;
}

int indice_letra(int lenght)
{
    for (int i = 0; i < lenght; i++) // função que mostrar o array
    {
        // char letra=alfabet[1];
        for (int j = 0; j < 26; j++)
        {
            if (char(palavra_player1[i]) == char(alfabet[j]))
            {
                soma = soma + (valor_letra[j]);
                std::cout << "letra =" << char(palavra_player1[i]) << "Valor letra =" << valor_letra[j] << " soma= " << soma << '\n';
            }
        }
    }

    return 0;
}

