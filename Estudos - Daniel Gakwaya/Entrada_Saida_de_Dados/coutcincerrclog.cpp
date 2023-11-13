#include <iostream>
#include <string>

int main()
{
    // imprimindo dados no terminal
    system("clear");
    std::cout << "Olá C++20 " << std::endl;
    int age{21};
    std::cout << "Idade : " << age << std::endl;
    std::cerr << "Mensagem de erro : Alguma coisa está errada" << std::endl;
    std::clog << "Mensagem log : Alguma coisa aconteceu " << std::endl;

    // Introduzido dados para o programa (Data input)
    std::cout << '\n';

    int age1;
    std::string name;
    std::cout << "Digite seu primeiro nome e sua idade : " << std::endl;
    /*
    introduzindo dados em declaração separadas
    std::cin >> name;
    std::cin >> age1;
    */
    std::cin >> name >> age1; // introduzindo dados em uma única instrução

    std::cout << "Olá " << name << " vocẽ tem " << age1 << " anos!" << std::endl;

    // Dado com espaço (strings com espaço).
    std::string full_name;
    int age3;
    /*
   A importanca de "cin.ignore()" : acontece que um feed de linha implícito, também conhecido como caractere de nova linha \n, é anexado a todas as entradas do usuário em um terminal O comportamento padrão de std::getline irá ler tudo, incluindo o caractere de nova linha \n do objeto de fluxo de entrada que é std::cin neste caso.
   */
    std::cin.ignore();
    std::cout << "Porfavor digite seu nome completo e sua idade " << std::endl;
    std::getline(std::cin, full_name);
    std::cin >> age3;
    std::cout << "Olá " << full_name
              << " você tem " << age3 << " anos!" << std::endl;

    return 0;
}