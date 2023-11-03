#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE* arquivo;
    int inteiro,n1;
    float decimal,n2;
    char string[100], nome[100];

    printf("Digite o nome do arquivo a ser editado");
    fgets(nome);
    
    //w - apaga todo o conteudo e edita o arquivo
    //r - le o arquivo
    //a - ediita mantendo o conteudo
    arquivo=fopen(nome,"w");

    
    return 0;
}
