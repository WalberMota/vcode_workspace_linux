#include <gtkmm.h>
/* #include <ib_verbs.h>
#include <slgh_compile.hh>
#include <xsltInternals.h> */

int main(int argc, char const *argv[])
{

    //Gtk::Window kit(argc,argv);
    Gtk::Window janela;
    janela.set_default_size(400,300);

    Gtk::Application::create("org.gtkmm.examples.base");    
    Gtk::ApplicationWindow janela;


    return 0;
}
