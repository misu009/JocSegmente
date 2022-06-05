#ifndef H_WINDOW
#define H_WINDOW

#include "config.h"

class Window{
public:
    Window();
    void init();
    void dump();
    int getIdentifier() const;

    virtual void initGrapichElements();
private:
    int identifier;
};

#endif // H_WINDOW
