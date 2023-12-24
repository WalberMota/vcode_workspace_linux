#ifndef PASS_H
#define PASS_H
#include <gtkmm/window.h>
#include <gtkmm/application.h>
#include <gtkmm/box.h>
#include <gtkmm/button.h>


class janela : public Gtk::Window
{

public:
    janela();
    ~janela() override;


protected:
    //manipular o sinal do mouse
    void clicou();

    //Um widget, numa interface gráfica, é um elemento de interação - tal como janelas, botões, menus, ícones, barras de rolagem etc.
    //elemento da interface - unico botão (meio grande rsrsrs mas para este pequeno estudo tá beleza)
    Gtk::Button m_botao1;

};

#endif // GTKMM_PASS_H
