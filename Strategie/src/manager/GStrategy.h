//===============================================
#ifndef _GStrategy_
#define _GStrategy_
//===============================================
#include <iostream>
//===============================================
using namespace std;
//===============================================
class GStrategy {
public:
    typedef enum {Line, Rect, Ellipse} eGType;
        
public:
    GStrategy();
    virtual ~GStrategy();
    
public:
    virtual void draw() const = 0;
    
public:
    static GStrategy* Factory(eGType type);
};
//===============================================
#endif
//===============================================
