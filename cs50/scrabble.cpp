#include <iostream>
#include <string>

// prototipo da função.
int indice_letra(int lenght);


// Variável para acumular os valores encontrados no array valor_letra
int soma_player1;
int soma_player2;
int soma;
int lenght;



// Tabela de Arrays de controle
int valor_letra[26] = {2, 3, 3, 2, 1, 4, 2, 6, 1, 8, 5, 1, 3, 1, 2, 3, 7, 1, 1, 2, 3, 4, 4, 7, 4, 6};
char alfabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char caixa_baixa;
std::string palavra_player;

int main(int argc, char const *argv[])
{
    system("clear");

//jogador 1 ===================================================
    std::cout << "Jogador 1\nDigite uma palavra: ";
    std::cin >> palavra_player;
    
    //passa para minuscula------------------------------
    for (int x = 0; x < palavra_player.length(); x++)
    {
        palavra_player[x] = char(tolower(palavra_player[x]));
    }
    //std::cout << "\nEm minuscula= "<< palavra_player<<'\n';
    //------------------------------------------------------

    lenght = palavra_player.length();
    //chama a função que calcular o valor da palavra
    soma_player1=indice_letra(lenght);   
    

//jogador 2 ===================================================
    std::cout << "\n\nJogador 2\nDigite uma palavra: ";
    std::cin >> palavra_player;
    //passa para minuscula ----------------------------------
    for (int x = 0; x < palavra_player.length(); x++)
    {
        palavra_player[x] = char(tolower(palavra_player[x]));
    }
    //std::cout << "\nEm minuscula= "<< palavra_player<<'\n';
    //-------------------------------------------------------

    lenght = palavra_player.length();
    //chama a função que calcular o valor da palavra
    soma_player2=indice_letra(lenght);
    

   //Verifica o vencedor ===========================================
    std::cout <<"\n\nJogador 1: " << soma_player1 <<" pontos"<< '\n';
    std::cout <<"\nJogador 2: " << soma_player2 <<" pontos"<< '\n';
    if (soma_player1>soma_player2)
    {
        std::cout<<"\n\tJogador 1 é o vencedor!";
    }
    if (soma_player1<soma_player2)
    {
        std::cout<<"\n\tJogador 2 é o vencedor!";
    }
    if (soma_player1==soma_player2)
    {
        std::cout<<"\n\tEmpate!";
    }

    return 0;
}



//função para calculo do valor da palavra ============================

int indice_letra(int tamanho_palavra)
{
    soma=0;
    for (int i = 0; i < tamanho_palavra; i++) // função que mostrar o array
    {
        for (int j = 0; j < 26; j++)
        {
            if (char(palavra_player[i]) == char(alfabet[j]))
            {
                soma = soma + (valor_letra[j]);
            }
        }
    }
    return soma;
}

