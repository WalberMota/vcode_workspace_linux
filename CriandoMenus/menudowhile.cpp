/* Autor:Walber Mota
 Linguagem: C++
 Criado em 24/04/2023
 Objetivo: Uso de do while para criação de um meno básico
*/

#include <iostream>

int main()
{
    double a = 5.99, b = 4.99, c = 4.99, d = 5.99, e = 9.99, total = 0;
    const double tax = 1.13;
    char resposta='S';
    char escolha;

    std::cout << "\nBom dia! Bem-vindo à Padaria! O que você gostaria hoje?\n\n";
    std::cout << "\n\tCardápio"
              << "\t\t\t\t\t   Price"
              << "\n\n";
    std::cout << "A: Chá Earl Grey e Biscoitos  -                          R$ " << a << "\n";
    std::cout << "B: Café e um bolinho de mirtilo -                        R$ " << b << "\n";
    std::cout << "C: Espresso e um biscoito de chá -                       R$ " << c << "\n";
    std::cout << "D: Café e um Muffin-                                     R$ " << d << "\n";
    std::cout << "E: Chá Matte, scones e biscoitos-                        R$ " << e << "\n";
    do
    {
        std::cout<<"\n Digite a letra do item escolhido..";
        std::cin >> escolha;
        std::cout<<"\n";

        if (escolha == 'A' || escolha == 'a')
        {
            std::cout << "Chá Earl Grey e Biscoitos.\n";
            total = total + a;
        }
        if (escolha == 'B' || escolha == 'b')
        {
            std::cout << "Café e um bolinho de mirtilo.\n";
            total = total + b;
        }
        if (escolha == 'C' || escolha == 'c')
        {
            std::cout << "Espresso e um biscoito de chá.\n";
            total = total + c;
        }
        if (escolha == 'D' || escolha == 'd')
        {
            std::cout << "Café e um Muffin.\n";
            total = total + d;
        }
        if (escolha == 'E' || escolha == 'e')
        {
            std::cout << "Chá Matte, scones e biscoitos.\n";
            total = total + e;
        }
        if (resposta=='S'||resposta=='s')
        {
            std::cout<<"deseja mais alguma coisa?";
            std::cin>>resposta;
        }
    }
    while(resposta =='S'||resposta=='s');

    total = total * tax;
    std::cout << "\nA conta final é de R$ " << total << "\n";

    return 0;
}
