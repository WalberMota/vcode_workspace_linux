#include "janelas2.h"

Passwsm::Passwsm() : m_box1{Gtk::Orientation::VERTICAL}, m_box2{Gtk::Orientation::VERTICAL}, m_box3{Gtk::Orientation::VERTICAL}, m_box4{Gtk::Orientation::VERTICAL} {



  set_hierarchy();
  draw_widgets();
  //show_all_children();

}
//PassFirefox::~PassFirefox(){}

/* void Passwsm::on_button_importer(){
  filename = m_folder.get_filename();

  if( filename.empty() ){
    Gtk::MessageDialog empty( "O arquivo não pode ser vazio.", false, Gtk::MESSAGE_WARNING );
    empty.set_title( "O arquivo não pode ser vazio." );
    empty.run();
    return;
  } */

  if(m_entry3.get_text_length() == 0 )
  {
    Gtk::MessageDialog empty( "Informe a senha.", false, Gtk::MESSAGE_WARNING );
    empty.set_title( "Informe a senha." );
    empty.run();
    return;
  }

  if( filename.substr( filename.length() - 3, 3 ) != "gpg" ){
    Gtk::MessageDialog empty( "Tipo de arquivo inválido.", false, Gtk::MESSAGE_WARNING );
    empty.set_title( "Tipo de arquivo inválido." );
    empty.run();
    return;
  }
/* 
  // Inicia a lógica da importação
  ToolsPassFox tpf;
  if( tpf.import_file( filename, m_entry3.get_text() ) ){
    m_label5.set_markup( "<b>\u2714 Arquivo importado com sucesso!</b>" );
    m_entry3.set_text("");
    filename = "";
    m_folder.set_filename("Nenhum");
  }else{
    Gtk::MessageDialog empty( "Falha ao importar arquivo.", false, Gtk::MESSAGE_WARNING );
    empty.set_title( "Falha ao importar arquivo." );
    empty.set_secondary_text( "Execute esse programa via linha de comando para ver a saída." );
    empty.run();
  } 
}*/

void Passwsm::on_button_exporter(){
  if( m_entry1.get_text_length() == 0 || m_entry2.get_text_length() == 0 ){
    Gtk::MessageDialog empty( "Exportar com GPG arquivo", false, Gtk::MESSAGE_WARNING );
    empty.set_title( "Falha ao exportar" );
    empty.set_secondary_text( "É necessário preencher ambos os campos." );
    empty.run();
    return;
  }

  if( m_entry1.get_text()!= m_entry2.get_text() ){
    Gtk::MessageDialog empty( "Exportar com GPG arquivo", false, Gtk::MESSAGE_WARNING );
    empty.set_title( "Falha ao exportar" );
    empty.set_secondary_text( "As senhas precisam ser iguais." );
    empty.run();
    return;
  }

  ToolsPassFox tpf;
  if( tpf.export_file( m_entry1.get_text() ) ) {
    m_entry1.set_text("");
    m_entry2.set_text("");
    m_label1.set_text("\u2714 Arquivo salvo com sucesso!");
    m_label5.set_markup("Salvo em: <b>" + tpf.passfirefox + "</b>");
  }else{
    Gtk::MessageDialog empty( "Falha ao Exportar arquivo", false, Gtk::MESSAGE_ERROR );
    m_entry1.set_text("");
    m_entry2.set_text("");
    empty.run();
    return;
  }

}

void Passwsm::set_hierarchy(){
  // Window
  Passwsm add(m_fixed);

  // Fixed
  Passwsm::m_fixed.add_controller( m_frame1 );
  m_fixed.add( m_frame2 );
  m_fixed.add( m_box4 );
  m_fixed.move( m_frame2, 6, 180 );
  m_fixed.move( m_box4, 6, 310 );

  // Frame 1
  m_frame1.add( m_box1 );
  m_frame1.set_label("Exportar Senhas");

  // Box 1
  m_box1.add( m_alignment1 );
  m_box1.add( m_label1 );
  m_box1.add( m_button1 );

  // Alignment 1
  m_alignment1.add( m_box2 );

  // Box 2
  m_box2.pack_start( m_entry1, true, true, 0 );
  m_box2.pack_start( m_entry2, true, true, 0 );

  // Frame 2
  m_frame2.add( m_alignment2 );
  m_frame2.set_label("Importar Senhas");

  // Alignment 2
  m_alignment2.add( m_box3 );

  // Box 3
  m_box3.pack_start( m_folder, true, true, 0 );
  m_box3.pack_start( m_entry3, true, true, 0 );
  m_box3.pack_start( m_button2, true, true, 0 );

  // Box 4
  m_box4.pack_start( m_label5, true, true, 0 );
  m_box4.pack_start( m_label6, true, true, 0 );
  m_box4.pack_start( m_linkbutton, true, true, 0 );

}

void Passwsm::draw_widgets(){
  // Window
  set_title("Exportar e Importar Senhas para o Firefox");
  set_default_size( 300, 400 );
  set_visible( true );
  set_can_focus( false );
  set_resizable( false );
  set_border_width( 6 );

  // Fixed
  m_fixed.set_size_request( 300, 400 );
  m_fixed.set_visible( true );
  m_fixed.set_can_focus( false );

  // Frame 1
  m_frame1.set_size_request( 100, 80 );
  m_frame1.set_visible( true );
  m_frame1.set_can_focus( false );
  m_frame1.set_margin_end( 8 );
  m_frame1.set_shadow_type( Gtk::ShadowType::SHADOW_IN );
  m_frame1.set_label_align( 0.02 );

  // Box 1
  m_box1.set_visible( true );
  m_box1.set_can_focus( false );

  // Alignment 1
  m_alignment1.set_size_request( 400, 62 );
  m_alignment1.set_visible( true );
  m_alignment1.set_can_focus( true );
  m_alignment1.set_border_width( 10 );

  // Box 2
  m_box2.set_visible( true );
  m_box2.set_can_focus( false );
  

  // Entry 1
  m_entry1.set_visible( true );
  m_entry1.set_visibility( false );
  m_entry1.set_can_focus( true );
  m_entry1.set_placeholder_text("Insira sua senha");
  m_entry1.set_input_purpose( Gtk::INPUT_PURPOSE_PASSWORD );
  m_entry1.set_max_length( 32 );

  // Entry 2
  m_entry2.set_visible( true );
  m_entry2.set_visibility( false );
  m_entry2.set_can_focus( true );
  m_entry2.set_placeholder_text("Repita sua senha");
  m_entry2.set_input_purpose( Gtk::INPUT_PURPOSE_PASSWORD );
  m_entry2.set_max_length( 32 );

  // Label 1
  m_label1.set_text("Exportar senhas no formato GPG com criptografia");
  m_label1.set_visible( true );
  m_label1.set_can_focus( false );

  // Button 1
  m_button1.set_label("Exportar");
  m_button1.set_visible( true );
  m_button1.set_can_focus( true );
  m_button1.set_focus_on_click( true );
  m_button1.set_border_width( 5 );
  m_button1.signal_clicked().connect( sigc::mem_fun( *this, &PassFirefox::on_button_exporter ) );

  // Frame 2
  m_frame2.set_size_request( 100, 80 );
  m_frame2.set_visible( true );
  m_frame2.set_can_focus( false );
  m_frame2.set_margin_end( 8 );
  m_frame2.set_shadow_type( Gtk::ShadowType::SHADOW_IN );
  m_frame2.set_label_align( 0.02 );

  // Alignment 2
  m_alignment2.set_size_request( 396, 100 );
  m_alignment2.set_visible( true );
  m_alignment2.set_can_focus( false );
  m_alignment2.set_border_width( 10 );

  // Box 3
  m_box3.set_visible( true );
  m_box3.set_can_focus( false );

  // Label 3
  m_folder.set_visible( true );
  m_folder.set_can_focus( false );
  m_folder.set_title( "Importar arquivo GPG" );

  // Entry 3
  m_entry3.set_visible( true );
  m_entry3.set_visibility( false );
  m_entry3.set_can_focus( true );
  m_entry3.set_placeholder_text("Informe a senha do arquivo");
  m_entry3.set_input_purpose( Gtk::INPUT_PURPOSE_PASSWORD );
  m_entry3.set_max_length( 32 );

  // Button 2
  m_button2.set_label("Importar");
  m_button2.set_visible( true );
  m_button2.set_can_focus( true );
  m_button2.set_focus_on_click( true );
  m_button2.signal_clicked().connect( sigc::mem_fun( *this, &PassFirefox::on_button_importer ) );

  // Box 4
  m_box4.set_size_request( 397, 80 );
  m_box4.set_visible( true );
  m_box4.set_can_focus( false );

  // Label 5
  m_label5.set_visible( true );
  m_label5.set_can_focus( false );
  m_label5.set_text( "O arquivo será salvo na raíz do diretório" );

  // Label 6
  m_label6.set_visible( true );
  m_label6.set_can_focus( false );
  m_label6.set_text( "GNU GPL v3" );


   // LinkButton
  m_linkbutton.set_visible( true );
  m_linkbutton.set_can_focus( false );
  m_linkbutton.set_label("terminalroot.com.br");
  m_linkbutton.set_uri("https://terminalroot.com.br");

}
