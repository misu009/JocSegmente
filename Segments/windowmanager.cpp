#include "windowmanager.h"

WindowManager::WindowManager() {

    windows.clear();
    this->currentWindowIdentifier = -2;
}

bool WindowManager::setCurrentWindow(int windowIdetifier) {

    if (this->currentWindowIdentifier != windowIdetifier && windowIdetifier != -2) {

        this->windows[currentWindowIdentifier].dump();
        this->windows[windowIdetifier].init();

        setcurrentwindow(windowIdetifier);

        this->currentWindowIdentifier = windowIdetifier;

        return true;
    }

    return false;
}

void WindowManager::initWindows() {

    int startWindow;
    startWindow = initGameWindow();

    this->setCurrentWindow(startWindow);
}

int WindowManager::initGameWindow() {

    Window gameWindow;

    gameWindow.init();
    gameWindow.dump();

    this->windows[gameWindow.getIdentifier()] = gameWindow;

    return gameWindow.getIdentifier();
}
