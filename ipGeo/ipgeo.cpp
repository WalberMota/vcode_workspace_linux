/*
#include <iostream>
#include <string>
#include<vector>

using std::to_string;

int main(int argc, char const *argv[])
{
    std::string ip, var1;

    std::cout << "Informa a localização geográfica de um IP";

    std::cout <<"informe o IP:";
    getline (std::cin,ip);

    var1="curl https://ipinfo.io/";
    var1+=ip;

    std::cout << var1<<std::endl;

    system(var1);

    return 0;
}
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