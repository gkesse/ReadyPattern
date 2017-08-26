//===============================================
#ifndef _GObserver_
#define _GObserver_
//===============================================
#include <iostream>
//===============================================
using namespace std;
//===============================================
class GObservable;
//===============================================
class GObserver {
public:
    GObserver();
    virtual ~GObserver();
    
public:
    virtual void update(GObservable* obs) = 0;
};
//===============================================
#endif
//===============================================
