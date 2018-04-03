#include <gtkmm.h>

int main(int argc, char *argv[])
{
  auto app =
    Gtk::Application::create(argc, argv,
      "org.gtkmm.examples.base");

  Gtk::Window window;
  window.set_default_size(1280, 800);
  Gtk::Button m_button;
  m_button.set_label("click me");
  m_button.show();
  window.add(m_button);
  window.set_title("test gtkmm");

	

  return app->run(window);
}
