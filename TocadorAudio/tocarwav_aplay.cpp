/*
Autor: Walber Mota
Data da Criação: 19/05/2023
Objetivos: Prog. básico para reprodução de arquivo *.wav
Linguagem: C/C++
*/

#include <iostream>

int main()
{
    system("aplay -N 2310.wav");
    /*-N, --nonblock : Abre o dispositivo de áudio no modo sem bloqueio.
    Se o dispositivo estiver ocupado, o programa será encerrado imediatamente.
    Se esta opção não for definida, o programa será bloqueado até que o 
    dispositivo de áudio esteja disponível novamente.
    */
    return 0;
}
