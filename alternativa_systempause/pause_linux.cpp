	#include<iostream>

    int main(int argc, char const *argv[])
    {
        do // faz um pause no linux
	{
		std::cout << '\n' << "Tecle Enter para continuar...  \n";
	} while (std::cin.get() != '\n');
        
        return 0;
    }
    