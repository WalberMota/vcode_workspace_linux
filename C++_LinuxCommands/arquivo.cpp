#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE* arquivo;
    int inteiro,n1;
    float decimal,n2;
    char string[100], nome[100];

    printf("Digite o nome do arquivo a ser editado");
    gets(nome);
    
    //w - apaga todo o conteudo e edita o arquivo
    //r - le o arquivo
    //a - ediita mantendo o conteudo
    arquivo=fopen(nome,"w");

    printf("digite um texto para colocar no arquivo: ");
    fflush(stdin); // limpa o buffer de entrada
    gets(string);
    fprintf(arquivo,"%s\n",string);
    printf("Digite um numero inteiro: ");
    scanf("%d",&inteiro);

    






    
    return 0;
}
