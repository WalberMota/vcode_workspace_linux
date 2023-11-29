#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Quantidades de argumentos passados: " << argc - 1 << '\n';
    std::cout << "argumentos:\n";
    if (argc - 1 != 0)
    {
        // arg-1 para evitar considerar o proprio programa como argumento
        for (int i = 1; i <= argc - 1; i++) 
        {
            std::cout << i << "-" << argv[i] << '\n';
        }
    }
    else{std::cout << "    nenhum argumento foi passado";

    return 0;
}
