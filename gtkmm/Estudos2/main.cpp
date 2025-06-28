#include "janelas2.h"

int main( int argc, char ** argv ){

  auto app =  Gtk::Application::create("org.pass-wsm.gtkmm" );

  //return app->run(Passwsm)(argc, argv);

  return app->make_window_and_run<Passwsm>(argc, argv);
}
