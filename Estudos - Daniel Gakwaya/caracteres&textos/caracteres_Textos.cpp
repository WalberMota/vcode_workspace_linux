#include <iostream>


int main(){

	char caracter1 {'a'};
    char caracter2 {'r'};
    char caracter3 {'r'};
    char caracter4 {'o'};
    char caracter5 {'w'};
    
    std::cout << caracter1 << std::endl;
    std::cout << caracter2 << std::endl;
    std::cout << caracter3 << std::endl;
    std::cout << caracter4 << std::endl;
    std::cout << caracter5 << std::endl;

    //Um byte na memoria = 2^8 = 256 diferentes valores (0~255)
    std::cout << std::endl;
    
    char value = 65 ; // código ASCII para 'A'
    std::cout << "value : " << value << std::endl; // A
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl; 

    return 0;
}