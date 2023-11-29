#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Quantidades de argumentos passados: " << argc-1 << '\n';
    std::cout << "argumentos:\n";
    for (int i=1; i <=argc-1 ; i++)
    {
        std::cout << i << "-" <<argv[i-1]<<'\n';

    }


    return 0;
}
