#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    double t_menor,t_maior, incremento;
    double fahr, celsius;
    std::setprecision(1);
    t_menor=10.2;
    t_maior=100;
    incremento=10;

    celsius=t_menor;

    std::cout << "\n|   Celsius\t|  Fahrenheit\t|\n";
    std::cout << "+-------------------------------+\n";
    
    while (celsius <= t_maior)
    {
        fahr=(9 * celsius + 160) / 5;
        std::cout <<"|\t"<<std::setprecision(2)<<celsius<<"\t|\t"<< std::fixed<<fahr<<"\t|\n";
        printf ("+-------------------------------+\n");        
        celsius = celsius+incremento;
    }
    

    return 0;
}