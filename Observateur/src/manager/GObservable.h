//===============================================
#ifndef _GObservable_
#define _GObservable_
//===============================================
#include "GObserver.h"
#include <iostream>
#include <vector>
#include <string>
//===============================================
using namespace std;
//===============================================
class GObservable {
public:
    GObservable();
    virtual ~GObservable();
    
public:
    void attach(GObserver* obs);
    void detach(GObserver* obs);
    void notify();
    
public:
    virtual string getData() const = 0;
    
private:
    vector<GObserver*> m_observer;
};
//===============================================
#endif
//===============================================
