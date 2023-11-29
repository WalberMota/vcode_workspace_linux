#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Quantidades de argumentos passados: " << argc-1 << '\n';
    std::cout << "argumentos:\n";
    for (int i=1; i <=argc ; i++)
    {
        std::cout << i << "-" <<argv[i]<<'\n';

    }


    return 0;
}
