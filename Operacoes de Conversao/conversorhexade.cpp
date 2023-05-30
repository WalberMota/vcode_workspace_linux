//Autor: Walber Mota
//Linguagem: C++
//Finalidade: Conversor de Decimal em Hexadecimal

#include <iostream>


int main()
{

    int n;  
    std::cout<<"CONVERSOR DE DECIMAL EM HEXADECIMAL\n\n";
    std::cout<<"digite o numero  em decimal\n -> ";
    std::cin>>n; 
    std::cout<<"Valor Hex : "<<std::uppercase<<std::hex<<n<<"\n"; 

    return 0;
}
