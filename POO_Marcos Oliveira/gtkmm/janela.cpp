#include <gtkmm.h>

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

  return app->make_window_and_run<janela1>(argc, argv);
}