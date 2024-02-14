#include <iostream>

int main(){

	int value { 5 };
    
    //incremento de uma unidade.
    value = value + 1; //6
    std::cout << "O valor é : " << value << std::endl; // 6
    
    value = 5; // Volta o valor para 5
    
    //Decrementa de 1
    value = value - 1; // 4
    std::cout << "O valor é : " << value << std::endl; //4
    
    //===================================================================

    
    std::cout << "======Postfixado incremento e decremento======"<< std::endl;
    //retorna o valor para 5
    value = 5;
    
    std::cout << "O valor é (incrementando) : " << value++ << std::endl; // 5
    std::cout << "O valor é : " << value << std::endl; // 6
    
    std::cout << std::endl;
    
    //Decrement with postfix
    
    //retorna o valor para 5
    value = 5;
    
    std::cout << "O valor é (decrementando) : " << value-- << std::endl; //5
    std::cout << "O valor é : " << value << std::endl; // 4


    //===================================================================

    
    std::cout << "======Prefixando incremento e decremento======"<< std::endl;

    //retorna o valor para 5
    value = 5;
    
    ++value;
    std::cout << "O valor é (prefixado++) : " << value << std::endl; // 6
    
    //retorna o valor para 5
    value = 5;
    std::cout << "O valor é (prefixado++ in place) : " << ++value << std::endl; // 6
    
    std::cout << std::endl;
    
    //Prefixando : decrementando
    
    //retorna o valor para 5;
    value = 5;
    --value;
    std::cout << "O valor é (prefixado--) : " << value << std::endl; // 4
    
    //retorna o valor para 5;
    value = 5;
    std::cout << "O valor é (prefixado-- no lugar) : " << --value << std::endl;//4

   
    return 0;
}