	#include<iostream>

    int main(int argc, char const *argv[])
    {
        do // faz um pause no linux
	{
		std::cout << '\n';
			// << "Press the Enter key to continue.";
	} while (std::cin.get() != '\n');
        
        return 0;
    }
    