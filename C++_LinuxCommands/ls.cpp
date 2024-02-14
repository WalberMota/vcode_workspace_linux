// Flushing files
#include <iostream>
#include <fstream> // std::ofstream
#include <string>


std::string linha, registra, saida;

int main()
{

    std::fstream outfile; // fstream - leitura e escrita
    outfile.open("dat");//, std::ios::in);

    if (outfile.is_open())
    {
        std::cout<<"Texto no arquivo: ";
        // outfile.open("dat", std::ios::in);
        while (!outfile.eof())
        {
            getline(outfile, linha);
            if (linha!="")
                registra=linha;
            
            std::cout << linha << '\n';

        }
            std::string::iterator it = registra.begin();
            std::cout<<"==>";
            for(int i=0;i<36;i++)
            {
                saida[i]=it[i];
                if (it[i]=='w')
                {
                    std::cout<<it[i];
                }


            }





/*             while (rit != registra.end())
            {
                std::cout << *rit;
                ++rit;
            } */

        outfile.close();
    }
    else
    {
        std::cout << "ERRO: arquivo não foi aberto ou não existe" << '\n';
    }


    return 0;
}