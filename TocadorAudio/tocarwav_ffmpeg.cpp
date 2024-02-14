/*
Autor: Walber Mota
Data da Criação: 26/05/2023
Objetivos: Prog. básico para reprodução de arquivo *.wav
Linguagem: C/C++
OBS.: necessário instalar ffmpeg: sudo apt install ffmpeg
*/

#include <iostream>

int main()
{
    system("ffplay -nodisp -hide_banner -v quiet -autoexit -i 2310.mp3");
    
    return 0;
}
