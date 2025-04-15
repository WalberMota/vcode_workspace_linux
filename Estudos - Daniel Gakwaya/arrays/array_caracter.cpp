#include <iostream>

int main()
{

    // Declara o array
    char message[]{"Hello Dev"}; // o compilador automaticamente coloca \0 no fim do array

    int data[5]{1, 2, 3, 3, 3};
    std::cout << "data : " << data << std::endl; // a saida será: "data : 0x7fff79c1f6e0"

    // Imprimindo a matriz através de looping
    std::cout << "message : ";
    for (auto c : message)
    {
        std::cout << c;
    }
    std::cout << std::endl;

    // Modificando um caracter em nosso array
    message[1] = 'a';

    // Imprima a matriz através de looping
    std::cout << "message : ";
    for (auto c : message)
    {
        std::cout << c;
    }
    std::cout << std::endl;

    // Provavelmente imprimirá lixo após sua matriz de caracteres
    std::cout << "message : " << message << std::endl;

    // Se um array de caracteres é encerrado com nulo, ele é chamado de C-String
    char message1[]{'B', 'a', 'r', 'c', 'o', '\0'};
    std::cout << "\nmessage1 : " << message1 << std::endl;
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;

    char message2[6]{'P', 'a', 'p', 'e', 'l'};
    std::cout << "\nmessage2 : " << message2 << std::endl;
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;

    char message3[]{'W', 'a', 'l', 'b','e','r'}; // Não é uma C-String, como não há caráter nulo
    std::cout << "\nmessage3 : " << message3 << std::endl;
    std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl;

    // String literal
    char message4[]{"Hello"};
    std::cout << "\nmessage4 : " << message4 << std::endl;
    std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl;

    // Não é possível imprimir com segurança matrizes diferentes das de caracteres
    int numbers[]{1, 2, 3, 4, 5};
    std::cout << "\nnumbers :  " << numbers << std::endl;

    return 0;
}