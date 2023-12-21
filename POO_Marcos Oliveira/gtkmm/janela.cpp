#include <gtkmm.h>

int main( void ){

    Gtk::Window janela;
    janela.set_default_size( 300 , 200 );

     janela.activate();
    
    janela.show();
    return 0;
}

// COMPILE: g++ janela.cpp -o janela $(pkg-config gtkmm-4.0 --cflags --libs)
