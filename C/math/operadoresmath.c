#include<stdio.h>

int main(void)
{
    int numero1,numero2;
    printf("Digite um primeiro número:\n");
    scanf("%d",&numero1);
    printf("Digite um segundo número:\n");
    scanf("%d",&numero2);
    printf("\n");
    printf("A Soma de %d com %d é %d",numero1,numero2,numero1+numero2);
    printf("A Multiplicação de %d com %d é %d",numero1,numero2,numero1*numero2);
    printf("A Divisão de %d por %d é %d",numero1,numero2,numero1+numero2);
    return 0;
}
