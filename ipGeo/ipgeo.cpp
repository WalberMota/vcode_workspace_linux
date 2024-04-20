#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string ip, var1;
    
    std::cout << "Informa a localização geográfica de um IP";

    std::cout <<"informe o IP:";
    getline (std::cin,ip);
    
    var1="curl https://ipinfo.io/"+ argc;

    std::cout << var1<<std::endl;

    //system ("curl https://ipinfo.io/"+argc);

    return 0;
}
