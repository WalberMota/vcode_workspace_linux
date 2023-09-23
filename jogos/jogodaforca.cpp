/*
Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 18/09/2023
Version 01.00
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Simples jogo da Forca - estudo da codificação do Fessor Bruno (CFB - youtube).
*/

#include <iostream>
#include<string>

int main()
{
    char secretword[20], letra[1], palavra[20], dicadapalavra[20];
    int tamanho{0}, indice{0}, chances{6}, acertos{0};
    bool acertou{false};

    system("clear");
    std::cout << "\nSem deixar o jogador ver. Digite a palavra secreta: ";
    std::cin >> secretword;
    std::cout << "\nCom uma só palavra digite uma dica para o jogador\n(Ex.:fruta, casa, animal, etc): ";
    std::cin >> dicadapalavra;

    system("clear");

    while (secretword[indice] != '\0')
    {
        indice++;
        tamanho++;
    }

    for (int i = 0; i < 20; i++)
    {
        palavra[i] = '-';
    }

    while (chances > 0 && acertos < tamanho)
    {
        std::cout<<"Dica do desafio : "<<dicadapalavra<<" com "<<tamanho<<" letras.";
        std::cout << "\n\nTentativas restantes: " << chances << "\n\n";

        std::cout << "Palavra secreta: ";
        for (int i = 0; i < tamanho; i++)
        {
            std::cout << palavra[i];
        }
        std::cout << "\n\nDigite uma letra: ";
        std::cin >> letra[0];

        for (int indice = 0; indice < tamanho; indice++)
        {
            if (secretword[indice] == letra[0])
            {
                palavra[indice] = secretword[indice];
                acertos++;
                acertou = true;                
            }

        }
        if (acertou==false)
        {
            chances=chances-1;

        }
        acertou=false;
        system("clear");
    }

    if (acertos==tamanho){
        std::cout << "Palavra secreta: "<<secretword;
        std::cout<<"\n\nVocê venceu!";
    }
    else
    {
        std::cout << "Palavra secreta: "<<secretword;        
        std::cout<<"\n\nVoĉe perdeu ...";
    }
        return 0;
}
