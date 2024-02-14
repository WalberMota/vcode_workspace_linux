#include <iostream>

int main(){
    
	int valor {45};
    
    std::cout << "O valor é : " << valor << std::endl;
    
    std::cout << std::endl;
    valor = valor + 5;
    //valor +=5; // equivale à: valor = valor + 5
    std::cout << "O valor é (depois de +=5) : " << valor << std::endl; // 50

    std::cout << std::endl;
    valor -=5; // equivale à: valor = valor - 5
    std::cout << "O valor é (depois de -=5) : " << valor << std::endl; // 45 

    std::cout << std::endl;
    valor *=2;
    std::cout << "O valor é (depois de *=2) : " << valor << std::endl; // 90

    std::cout << std::endl;
    valor /= 3;
    std::cout << "O valor é (depois de /=3) : " << valor << std::endl; // 30

    std::cout << std::endl;
    valor %= 11;
    std::cout << "O valor é (depois de %=11) : " << valor << std::endl;// 8
    return 0;
}