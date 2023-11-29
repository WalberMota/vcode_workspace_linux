#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Quantidades dee argumentos passados: " << argc << '\n';
    std::cout << "argumentos:\n";
    for (int i=1; i <=argc ; i++)
    {
        std::cout << i << "-" <<argv[i-1]<<'\n';

    }


    return 0;
}
