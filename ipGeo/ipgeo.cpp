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

    std::cout << "Please enter a word." << std::endl;
    std::cin >> ip;

    
    int wordlength, i;

    var1="curl https://ipinfo.io/"+ip;

    
    char * c = var1.data();//precisa converter a var em um constchar * para poder ser
                            //usadon em system()

    std::cout << c <<'\n';

    system (c);

    return 0;

}