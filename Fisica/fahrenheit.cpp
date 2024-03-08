#include <iostream>

int main(int argc, char const *argv[])
{
    int t_menor,t_maior, incremento;
    float fahr, celsius;

    t_menor=0;
    t_maior=300;
    incremento=20;

    fahr=t_menor;

    std::cout << "\n|   Fahrenheit\t|     Celsius\t|\n";
    std::cout << "+-------------------------------+\n";
    while (fahr <= t_maior)
    {
        celsius=(5.0/9.0) * (fahr-32.0);
        std::cout <<"|\tfahr\t|\tcelsius\t|\n";
        printf ("+-------------------------------+\n");        
        fahr = fahr+incremento;
    }
    

    return 0;
}