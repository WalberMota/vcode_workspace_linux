#include "janelas2.h"

int main( int argc, char ** argv ){

  auto app = Gtk::Application::create("org.pass-wsm.gtkmm" );
  PassFirefox pass_firefox;
  return app->make_window_and_run( pass_firefox );

}
