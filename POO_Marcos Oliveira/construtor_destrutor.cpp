/*
Exemplo do uso de construtores e destrutores
com uso de ncurses.

Para compilar usar:
  g++ construtor_destrutor.cpp -lncurses -ltinfo -o output
  ou 
  g++ construtor_destrutor.cpp -lncurses -ltinfo
*/

#include <iostream>
#include <ncurses.h>

class Qualquer {
  public:
    Qualquer() //construtor que inicia a tela com ncurses
    {
      initscr();
    }

    void uma_funcao_membro_qualquer()
    {
      printw("UMA função-membro qualquer");
      refresh();
    }

    void outra_funcao_membro_qualquer()
    {
      move(3, 20);
      printw("OUTRA função-membro qualquer");
    }

    ~Qualquer() //destrutor que fecha a classe e encerra ncurses
    {
      getch(); //espera o usuário teclar algo
      endwin(); //encerra ncurses
    }

};

int main( int argc , char **argv )
{
  Qualquer q;//quando o objeto é criado automaticamente ele inicia a tela do ncurses
  q.uma_funcao_membro_qualquer(); //chamada comum de função-membro
  q.outra_funcao_membro_qualquer(); //chamada comum de função-membro
  return 0;
}

