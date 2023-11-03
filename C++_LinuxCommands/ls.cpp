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
            //registra=linha;
            std::cout << "tamanho = " << linha.length() << "\n\n";
            std::cout << linha << "\n\n";
            std::cout << linha[35] << '\n';
            registra=linha[34]+linha[35];

        }
        
        //outfile.close();
    }
    else
    {
     //   std::cout << "ERRO: arquivo não foi aberto ou não existe" << '\n';
    }
    std::cout<<registra;
    //outfile.close();
    return 0;
}