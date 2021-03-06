#include "widget.h"
#include "gui/gui_manager.h"

///////////////////////////////////////////////////////////////////////////////
Widget::~Widget()
{
	GuiManager& gui = GuiManager::getInstance();

	if (gui.getFocus() == this)
	{
		gui.setFocusTo(NULL);
	}
}
///////////////////////////////////////////////////////////////////////////////
