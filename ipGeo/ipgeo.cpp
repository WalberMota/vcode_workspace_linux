/*
Autor: Walber Mota
19/04/2024
Objetivo: Informar o endereço geográfico de um dado IP
 */
#include <iostream>
#include <string>

std::string ip,var1;

int main()
{

    std::cout << "Digite o numero IP (no formato : xxx.xxx.xxx.xxx):" << std::endl;
    std::cin >> ip;

    var1="curl https://ipinfo.io/"+ip;
    
    char * c = var1.data();//precisa converter a var em um constchar * para poder ser
                            //usado em system()

    //std::cout << c <<'\n';

    system (c);
    std::cout << std::endl;

    return 0;

}