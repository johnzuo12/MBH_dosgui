#ifndef __GUI_MANAGER_H_INCLUDED__
#define __GUI_MANAGER_H_INCLUDED__

#include "tools/errorclass.h"
#include "widget.h"
#include "window.h"
#include "message_box.h"
#include "keyboard.h"

///////////////////////////////////////////////////////////////////////////////
class GuiManager
{
	Widget* focus;
	Window* SCREEN;

	bool is_initialized;
	bool is_running;
public:
	GuiManager() : focus(NULL), SCREEN(NULL), is_initialized(false), is_running(false) {};
	~GuiManager();

	void init();
	void run();
	inline void stop() { this->is_running = false; }

	void show_exception(Error& e);

	static void print_line(float x, float y, std::string t);
	static void print(float x, float y, std::string t);
	static int get_text_width(string t);
	static int get_text_height(string t);
};
///////////////////////////////////////////////////////////////////////////////

#endif