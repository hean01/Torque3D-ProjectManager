#include "PlatformCheck.h"
#include <QtGui>

bool PlatformCheck::isWin() {
#ifdef Q_WS_WIN
	return true;
#endif
	return false;
}

bool PlatformCheck::isMac() {
#ifdef Q_WS_MAC
	return true;
#endif
	return false;
}

bool PlatformCheck::isX11() {
#ifdef Q_WS_X11
	return true;
#endif
	return false;
}
