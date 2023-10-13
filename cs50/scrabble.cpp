#include <iostream>
#include <string>

int valor_letra[26]{1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,6};
std::string alfa[26]{"a","b",'c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}
std::string palavra_player1;

int main(int argc, char const *argv[])
{
    system("clear");

    std::cout << "Jogador 1\nDigite uma palavra: ";
    std::cin >> palavra_player1;
 
    int tamanho_palavra = palavra_player1.length();

    for (int i=0;i<tamanho_palavra;i++)//função que mostrar o array
    {
        std::cout << "caracter["<<i<<"] = "<<palavra_player1[i]<<'\n';

    }
        std::cout<<'\n'<<"palavra_player1="<<palavra_player1<<'\n';    
    return 0;
}
