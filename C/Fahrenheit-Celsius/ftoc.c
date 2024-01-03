#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t_menor,t_maior, incremento;
    float fahr, celsius;

    t_menor=0;
    t_maior=300;
    incremento=20;

    fahr=t_menor;

    while (fahr <= t_maior)
    {
        celsius=(5.0/9.0) * (fahr-32.0);
        printf ("%4.0f %6.1f\n", fahr,celsius);
        fahr = fahr+incremento;
    }
    

    return 0;
}
