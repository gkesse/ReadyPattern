//===============================================
#include "GViewLine.h"
#include "GObservable.h"
//===============================================
GViewLine::GViewLine() {
    
}
//===============================================
GViewLine::~GViewLine() {
    
}
//===============================================
void GViewLine::update(GObservable* obs) {
    cout << "Observer ViewLine : " << obs->getData() << "\n";
}
//===============================================
