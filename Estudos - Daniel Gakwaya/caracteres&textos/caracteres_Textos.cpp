#include <iostream>


int main(){

	char caracter1 {'a'};
    char caracter2 {'r'};
    char caracter3 {'r'};
    char caracter4 {'o'};
    char caracter5 {'w'};
    
    std::cout << caracter1 << '\n';
    std::cout << caracter2 << '\n';
    std::cout << caracter3 << '\n';
    std::cout << caracter4 << '\n';
    std::cout << caracter5 << '\n';

    //Um byte na memoria = 2^8 = 256 diferentes valores (0~255)
    std::cout << '\n';
    
    char value = 65 ; // código ASCII para 'A'
    std::cout << "value : " << value << '\n'; // A
    std::cout << "value(int) : " << static_cast<int>(value) << '\n'; 

    return 0;
}