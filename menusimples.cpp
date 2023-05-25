/* Autor:Walber Mota
 Linguagem: C++
 Criado em 24/04/2023
 Objetivo: Uso de do while para criação de um menu básico
*/
#include <iostream>

int main()
{
    int choice;

    do
    {
        std::cout << std::endl;
        std::cout<< "1. primeira opção\n";
        std::cout<< "2. segunda opção \n";
        std::cout<< "3. terceira opção \n";
        std::cout<< "4. Sair\n";
        std::cout << "Opção: ";
        std::cin>>choice; // selecina o menu pelo numero 1,2 ou 3, sair com opção 4

        switch (choice)
        {
        case 1:
            // faz algo
            break;
        case 2:
            // faz algo
            break;
        case 3:
            // faz algo
            break;
        case 4:
            exit(0);
        
        }
    }
        while (choice != 4);

        return 0;
}