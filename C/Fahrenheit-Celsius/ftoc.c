#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t_menor,t_maior, incremento;
    float fahr, celsius;

    t_menor=0;
    t_maior=300;
    incremento=20;

    fahr=t_menor;

    printf ("\n|   Fahrenheit\t|     Celsius\t|\n");
    printf ("+-------------------------------+\n");
    while (fahr <= t_maior)
    {
        celsius=(5.0/9.0) * (fahr-32.0);
        printf ("|\t%0.0f\t|\t%0.1f\t|\n", fahr,celsius);
        printf ("+-------------------------------+\n");        
        fahr = fahr+incremento;
    }
    

    return 0;
}
