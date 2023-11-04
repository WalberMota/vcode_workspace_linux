/* rotina modificada da pergunta do usuário Daniel Marchi(Enviado em 06/06/2013 - 11:20h)
   e respondida por Guilherme(guipsp)
// https://www.vivaolinux.com.br/topico/C-C++/Converter-um-vetor-em-uma-String-1
*/

//programa gerador de CPF válido. O valor pode ser verificado em https://www.4devs.com.br/validador_cpf

#include <iostream>
#include <time.h>
#include <vector>
#include <string>

std::string formatacpf(); //protótippo da função formata CPF

//variáves globais
int cpf[11];
char strcpf[9];

int main()
    {
    //variáveis locais
    int soma=0;
    int resto=0;

    srand(time(NULL));

    for(int i=0; i<9; i++)
        {
        cpf[i]=rand() % 9;
        soma=soma+ ((10-i)*cpf[i]);
        }
    resto=(soma%11);
    if (resto<2) cpf[9]=0;
    else cpf[9]=11-resto;

    soma=0;

    for(int i=0; i<10; i++)
        {
        soma=soma+((11-i)*cpf[i]);
        }

    resto=0;

    resto=(soma%11);
    if (resto<2) cpf[10]=0;
    else cpf[10]=11-resto;

    std::cout << "\nCPF Gerado: ";
    for(int i=0; i<11; i++)
        {
        std::cout << cpf[i]; //imprime os numero sem formataçao de CPF

        }
    formatacpf();
    std::cout << "\n\nVariável usada fora da função: " << strcpf << '\n';
    return 0;
    }


//função para formatar o CPF gerado e armazena numa string
std::string formatacpf()
{
    char c;
    int j=0;
    for(int i=0;i<14;i++)
    {
        if (i==3 || i==7){
          c='.';}
        else if (i==11){
          c='-';}
        else{
          c= (char)(((int)'0')+cpf[j]);
          j++;}

        strcpf[i]= c;
    }

    std::cout << "\n\nCPF formatado dentro da função: " << strcpf;

    return strcpf;
}
