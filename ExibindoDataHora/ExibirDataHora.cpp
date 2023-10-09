//A struct tm é uma struct nativa do c++


#include<iostream>
#include<ctime> //biblioteca para manipular temp

int main(int argc, char const *argv[])
{
    time_t HoraAtual =time(0);
    tm *MinhaHora=localtime(&HoraAtual);

    return 0;
}
