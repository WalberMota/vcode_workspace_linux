#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string ip, var1;
    
    std::cout << "Informa a localização geográfica de um IP";

    std::cout <<"informe o IP:";
    std::cin >> ip;
    
    var1="curl https://ipinfo.io/"+ip;

    std::cout << var1;
    
    //system (var1);

    return 0;
}
