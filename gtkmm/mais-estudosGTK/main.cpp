#include "pass.h"

int main(int argc, char const *argv[])
{
    auto app = Gtk::Application::create("org.pass.gtkmm");
    janela  senha;

    return app->make_window_and_run<senha>(argc, argv);
    return 0;
}


