//===============================================
#include "GViewPie.h"
#include "GObservable.h"
//===============================================
GViewPie::GViewPie() {
    
}
//===============================================
GViewPie::~GViewPie() {
    
}
//===============================================
void GViewPie::update(GObservable* obs) {
    cout << "Observer ViewPie : " << obs->getData() << "\n";
}
//===============================================
