#include <iostream>

int main(int argc, char const *argv[])
{
    int Numero = 234;
    int *ptr1 = nullptr;

    std::cout <<"\nVARIÁVEIS CRIADAS\n";
    std::cout << "\nNumero = " << Numero;
    std::cout << "\nponteiro ptr1 = " << ptr1<<"\n";

    ptr1 = &Numero;
    std::cout << "\nEndereço na RAM de 'Numero' colocado em ptr1(ptr1 = &Numero) = " << ptr1;

    *ptr1 = 1456;
    std::cout << "\nNovo valor de Numero usando a instrução '*ptr1=1456' " << Numero;

    std::cout << "\nValor da variável Numero visto atraveś de ptr1 = " << *ptr1;

    std::cout << "\nEndereço na RAM da variável Numero = " << &Numero;
    std::cout << "\nEndereço na RAM do ponteiro ptr1   = " << &ptr1;

    int *ptr2 = ptr1;

    std::cout << "\nNovo ponteiro ptr2 criado com o endereço que está armazenado em ptr1 = " << ptr2;

    *ptr1 = *ptr1 + 200;

    std::cout << "\nAdicionado 200 ao valor de Numero via ptr1 (*ptr1 = *ptr1 + 200) = " << Numero;

    std::cout << "\nO valor de Numero visto através de ptr2 = " << *ptr2;

    return 0;
}
