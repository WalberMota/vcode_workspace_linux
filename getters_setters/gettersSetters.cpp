   
   #include <iostream>
   #include <string>
   #include "gettersSetters.h"

   Movie::Movie(std::string setNome, std::string setDiretor, std::string setNota)
    {
        nomeFilme = setNome;
        diretorFilme = setDiretor;
        setClassificacao(setNota);
        //std::cout << "objeto criado\n";
    }

    void Movie::setClassificacao(std::string setNota)//com os setters podemos criar regras
    {
        if (setNota == "G" || setNota == "PG" || \
            setNota == "PG-13" ||setNota == "R" || setNota == "NC")
        {
            classificacaoFilme = setNota;
        }
        else
        {
            classificacaoFilme = "NR";
        }

    }

    std::string Movie::getClassificacao()
    {
        return classificacaoFilme;

    }

    Movie::~Movie(){};