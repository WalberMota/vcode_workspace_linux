#include "pass.h"
#include <iostream>

janela::janela()
{
    set_title("Gerenciador de Senha - em construção(22/12/2023)");
    set_default_size(500, 300);
    set_visible(true);
    Gtk::Button m_botao1("Ola,usuário!");

    // Define a margem ao redor do botão.
    m_botao1.set_margin(10);

    // quando o botão é clicado ele chama o
    //  o método clicou() definido abaixo:
    m_botao1.signal_clicked().connect(sigc::mem_fun(*this, &clicou));
    // Isso empacota o botão na janela (um contêiner).
    set_child(m_botao1);
}

janela::~janela()
{
}

void janela::clicou()
{
  std::cout << "Olá usuário" << std::endl;
}

