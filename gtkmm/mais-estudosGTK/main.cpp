//rotina de lançamento da janela

#include <gtkmm.h>
#include "pass.h"

int main(int argc, char *argv[])
{
    
    auto app = Gtk::Application::create("org.pass.gtkmm");
 
    return app->make_window_and_run<janela>(argc, argv);
 
}

//g++ main.cpp pass.cpp -o pass $(pkg-config gtkmm-4.0 --cflags --libs)

