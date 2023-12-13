#include <iostream>

int main(int argc, char const *argv[])
{

    if (argc - 1 != 0)
    {
        std::cout << "Quantidade de argumento(s) passado(s): " << argc - 1 << '\n';
        //std::cout << "argumentos:\n";        
        // arg-1 para evitar considerar o proprio programa como argumento
        for (int i = 1; i <= argc - 1; i++) 
        {
            std::cout <<"\n    Argumento " <<i << " - " << argv[i] << '\n';
        }
    }
    else{std::cout << "\n    nenhum argumento foi passado";}

    return 0;
}
