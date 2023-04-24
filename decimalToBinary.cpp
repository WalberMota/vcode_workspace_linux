// Autor:Walber Mota
// Linguagem: C++
// Criado em 24/04/2023
// Conversor de decimal em binario,hexadecimal e octal

#include <iostream>

std::string toBinario(int n)
{

    std::string r;
    while (n != 0)
    {
        r += (n % 2 == 0 ? "0" : "1"); // gera uma string com as multiplas divisões por 2
        n /= 2;
    }
    std::string bin = "";
    int i;
    for (int i = 0; i < r.length(); i++) // inverter a string com restos e o quociente.
        bin = r[i] + bin;

    return bin;
}

int main()
{
    int number;
    std::cout << "Digite o numero decimal inteiro\n"
              << "-> ";
    std::cin >> number;

    std::cout << "decimal      : " << number << std::endl;
    std::cout << "binario      : " << toBinario(number) << std::endl; // chama a função toBinario
    std::cout << "hexadecimal  :" << std::hex << number << "\n";
    std::cout << "ocatadecimal :" << std::oct << number << "\n";
    return EXIT_SUCCESS;
}
