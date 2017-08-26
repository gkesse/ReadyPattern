//===============================================
#ifndef _GViewLine_
#define _GViewLine_
//===============================================
#include "GObserver.h"
//===============================================
class GViewLine : public GObserver {
public:
    GViewLine();
    ~GViewLine();
    
public:
    void update(GObservable* obs);
};
//===============================================
#endif
//===============================================
