#include <iostream>
#include <string>

std::string palavra_player1;
std::string separa;

int main(int argc, char const *argv[])
{
    int i{0};
    std::cout << "Jogador 1\nDigite uma palavra: ";
    std::cin >> palavra_player1;
    int tamanho_palavra = palavra_player1.length();

    std::string::iterator it = palavra_player1.begin();

    while (it != palavra_player1.end())
    {
        //std::cout << *it << ", ";
        separa[i]=*it;
        std::cout<<"separa["<<i<<"]="<<*it<<'\n';
        i++;
        ++it;

        //chamar a função que calcula os valores das letras....
    }

    for (int i=0;i<tamanho_palavra;i++)//mostrar o array
    {
        std::cout << separa[i]<<",";
        std::cout<<palavra_player1[i]<<'\n';
    }
    return 0;
}
