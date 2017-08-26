//===============================================
#ifndef _GViewPie_
#define _GViewPie_
//===============================================
#include "GObserver.h"
//===============================================
class GViewPie : public GObserver {
public:
    GViewPie();
    ~GViewPie();
    
public:
    void update(GObservable* obs);
};
//===============================================
#endif
//===============================================
