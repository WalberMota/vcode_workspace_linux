#include "pass.h"
#include <iostream>

janela::janela()
{
    set_title("Gerenciador de Senha - em construção(22/12/2023)");
    set_default_size(500, 300);
    set_visible(true);
    Gtk::Button m_botao1("Ola,usuário!");// cria o objeto botao com o rótulo "Ola,usuário!"
  m_button.set_margin(10);







}


{
  // Sets the margin around the button.
  m_button.set_margin(10);

  // When the button receives the "clicked" signal, it will call the
  // on_button_clicked() method defined below.
  m_button.signal_clicked().connect(sigc::mem_fun(*this,
              &HelloWorld::on_button_clicked));

  // This packs the button into the Window (a container).
  set_child(m_button);
}

