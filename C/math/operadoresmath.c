#include<stdio.h>

int main(void)
{
    float numero1,numero2;
    printf("Digite um primeiro número:\n");
    scanf("%f",&numero1);
    printf("Digite um segundo número:\n");
    scanf("%f",&numero2);
    printf("\n");
    printf("A Soma de %.2f com %.2f é %.2f\n",numero1,numero2,numero1+numero2);
    printf("A Multiplicação de %.2f com %.2f é %.2f\n",numero1,numero2,numero1*numero2);
    printf("A Divisão de %.2f por %.2f é %.2f\n",numero1,numero2,numero1/numero2);
    return 0;
}
