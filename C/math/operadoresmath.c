#include<stdio.h>

int main(void)
{
    float numero1,numero2,resto;
    printf("Digite um primeiro número:\n");
    scanf("%f",&numero1);
    printf("Digite um segundo número:\n");
    scanf("%f",&numero2);
    printf("\n");
    printf("A Soma de %.2f com %.2d é %.2d\n",numero1,numero2,numero1+numero2);
    printf("A Multiplicação de %.2d com %.2d é %.2d\n",numero1,numero2,numero1*numero2);
    printf("A Divisão de %.2f por %.2f é %.4f\n",numero1,numero2,numero1/numero2);
    resto = (int)numero1 % (int)numero2;
    printf("O resto da divisão de %d / %d é %.4f\n",numero1,numero2,resto);    
    return 0;
}
