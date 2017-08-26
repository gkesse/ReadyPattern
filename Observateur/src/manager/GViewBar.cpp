//===============================================
#include "GViewBar.h"
#include "GObservable.h"
//===============================================
GViewBar::GViewBar() {
    
}
//===============================================
GViewBar::~GViewBar() {
    
}
//===============================================
void GViewBar::update(GObservable* obs) {
    cout << "Observer ViewBar : " << obs->getData() << "\n";
}
//===============================================
