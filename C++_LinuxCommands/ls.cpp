// Flushing files
#include <iostream>
#include <fstream> // std::ofstream
#include <string>

std::string linha, registra;

int main()
{

    system("ls -lh /var/lib/plocate/plocate.db > dat");
    system("clear");
    std::fstream outfile; // fstream - leitura e escrita
    outfile.open("dat", std::ios::in);

    if (outfile.is_open())
    {

        // outfile.open("dat", std::ios::in);
        while (!outfile.eof())
        {
            getline(outfile, linha);
            if (linha!="")
                //registra=linha;
            std::cout << "tamanho = " << linha.length() << "\n\n";
            //std::cout<<"Texto no arquivo: ";            
            std::cout <<"Texto no arquivo: " << linha << '\n';

        }
        outfile.close();
    }
    else
    {
     //   std::cout << "ERRO: arquivo não foi aberto ou não existe" << '\n';
    }

    return 0;
}