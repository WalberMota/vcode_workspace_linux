#include<stdio.h>

int main(void)
{
    int numero1,numero2,resto;

    printf("Digite um primeiro número:\n");
    scanf("%d",&numero1);
    
    printf("Digite um segundo número:\n");
    scanf("%d",&numero2);
    
    printf("\n");

    printf("A Soma de %d com %d é %d\n",numero1,numero2,numero1+numero2);
    printf("A Multiplicação de %d com %d é %d\n",numero1,numero2,numero1*numero2);
    printf("A Divisão de %d por %d é %.4f\n",numero1,numero2,(float)numero1/(float)numero2);
    resto = numero1 % numero2;
    printf("O resto da divisão de %d / %d é %d\n",numero1,numero2,resto);    
    return 0;
}
