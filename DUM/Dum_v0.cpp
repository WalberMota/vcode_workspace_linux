/*usando strftime*/
# include <iostream>
# include <ctime>
# include <string>



int main(int argc, char const *argv[])
{
    std::string a;

    time_t hora;
    struct tm *infotempo;
    char memoria[10];
    time (&hora);
    infotempo = localtime (&hora);

    strftime (memoria,10,"%H:%M:%S",infotempo);
    //puts(memoria);
    std::cout << memoria << std::endl;//memoria;


    return 0;
}
