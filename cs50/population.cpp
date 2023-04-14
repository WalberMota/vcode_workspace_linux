#include <stdio.h>
#include <iostream>

int populacao = 1000;
int anos;
int i = 1;

int main(void)
{
    // TODO: Prompt for start size

    printf("CÁLCULO DA POPULAÇÃO FINAL DE LHAMAS\n");
    // TODO: Prompt for end size
    // printf();
    std::cout << "Digite o número de anos: ";
    std::cin >> anos;

    // TODO: Calculate number of years until we reach threshold
    do
    {
        /* code */
        populacao = populacao + (populacao / 3) - (populacao / 4);
        i++;
    } 
    while (i <= anos);
    
      // TODO: Print number of years
    std::cout << "\n\n\n";
    printf("A população ao final de %i anos será de %i lhamas", anos, populacao);
    return 0;

}
