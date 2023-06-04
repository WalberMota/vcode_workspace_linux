/*Autor: Walber Mota
Linguagem: C++
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Finalidade: Conversor de Decimal em Hexadecimal
*/

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
