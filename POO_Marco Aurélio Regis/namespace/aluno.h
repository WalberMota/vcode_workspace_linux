/* O arquivo header_file (.h) contém a estrutura da classe
ou seja o que é classe */

#ifndef ALUNO_H_
#define ALUNO_H_

#include <string>

namespace posgraduacao{
    class Aluno
    {

    };
}
namespace graduacao{
        class Aluno
    {
    private:
        int codigo;
        std::string nome;
        float notas[2]{0.0, 0.0};

    public:
        // ******* functions's prototypes *********
        // contrutor e destrutor
        Aluno(int codigo, std::string nome);
        ~Aluno();

        // getters
        int getCodigo();
        std::string getNome();
        float *getNotas();

        // setters
        void setNome(std::string nome);
        void setCodigo(int codigo);
        void setNotas(float *notas);
        // método que calcula a média das notas.
        float calculaMedia();
    };

};

#endif /* ALUNO_H_ */
