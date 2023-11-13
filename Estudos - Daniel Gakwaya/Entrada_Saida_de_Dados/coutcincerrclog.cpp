#include <iostream>
#include <string>

int main()
{
    // imprimindo dados no terminal
    system("clear");
    std::cout << "Hello C++20 " << std::endl;
    int age{21};
    std::cout << "Age : " << age << std::endl;
    std::cerr << "Error message : Something is wrong" << std::endl;
    std::clog << "Log message : Something happened " << std::endl;

    // Introduzido dados para o programa (Data input)
    std::cout << '\n';

    int age1;
    std::string name;
    std::cout << "Please type your name and age : " << std::endl;
    /*
    introduzindo dados em declaração separadas
    std::cin >> name;
    std::cin >> age1;
    */
    std::cin >> name >> age1; // introduzindo dados em uma única instrução

    std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;

    // Dado com espaço (strings com espaço).
    std::string full_name;
    int age3;
    /*
   A importanca de "cin.ignore()" : acontece que um feed de linha implícito, também conhecido como caractere de nova linha \n, é anexado a todas as entradas do usuário em um terminal O comportamento padrão de std::getline irá ler tudo, incluindo o caractere de nova linha \n do objeto de fluxo de entrada que é std::cin neste caso.
   */
    std::cin.ignore();
    std::cout << "Please type in your full name and age " << std::endl;
    std::getline(std::cin, full_name);
    std::cin >> age3;
    std::cout << "Hello " << full_name
              << " you are " << age3 << " years old!" << std::endl;

    return 0;
}