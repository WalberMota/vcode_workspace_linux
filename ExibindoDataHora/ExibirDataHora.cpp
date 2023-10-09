/*A struct tm é uma struct nativa do c++:

https://cplusplus.com/reference/ctime/
https://cplusplus.com/reference/ctime/tm/
https://cplusplus.com/reference/ctime/localtime/
https://cplusplus.com/reference/ctime/time_t/

*/

#include<iostream>
#include<ctime> //biblioteca para manipular temp

int main(int argc, char const *argv[])
{
    time_t HoraAtual =time(0);
    tm *MinhaHora=localtime(&HoraAtual);
    std::cout<<"\nHora Atual: "<<MinhaHora->tm_hour<<":"<<MinhaHora->tm_min<<":"<<MinhaHora->tm_sec<<"\n";
    
    return 0;
}
