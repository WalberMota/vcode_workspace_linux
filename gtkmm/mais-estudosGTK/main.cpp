#include "pass.h"

int main(int argc, char *argv[])
{
    //janela  senha;
    auto app = Gtk::Application::create("org.pass.gtkmm");
 

    return app->make_window_and_run<janela>(argc, argv);
    return 0;
}



