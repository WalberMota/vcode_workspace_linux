#include <gtkmm.h>
/* Todos os programas gtkmm devem incluir certos cabeçalhos do gtkmm; gtkmm.h inclui todo o kit gtkmm. Isso normalmente não é uma boa ideia, porque inclui um megabyte ou mais de cabeçalhos, mas, para este programa simples, é o suficiente.
 */


class janela1 : public Gtk::Window
{
public:
  janela1();
};

janela1::janela1()
{
  set_title("Janela da Aplicação");
  set_default_size(400, 300);
}

int main(int argc, char* argv[])
{

  auto app = Gtk::Application::create("org.gtkmm.examples.base");
    /* cria um objeto Gtk::Application, armazenado em um smartpointer Glib::RefPtr. Isso é necessário em todos os aplicativos gtkmm. O método create() para este objeto inicializa o gtkmm. */


  return app->make_window_and_run<janela1>(argc, argv);
/* Os argumentos argc e argv, passados ​​para seu aplicativo na linha de comando, podem ser verificados quando run() é chamado, mas este aplicativo simples não usa esses argumentos.
A última linha mostra a janela e entra no loop de processamento principal do gtkmm, que terminará quando a janela for fechada.
*/


}