//===============================================
#ifndef _GViewBar_
#define _GViewBar_
//===============================================
#include "GObserver.h"
//===============================================
class GViewBar : public GObserver {
public:
    GViewBar();
    ~GViewBar();
    
public:
    void update(GObservable* obs);
};
//===============================================
#endif
//===============================================
