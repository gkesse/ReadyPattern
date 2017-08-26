//===============================================
#include "GObservable.h"
//===============================================
GObservable::GObservable() {
    
}
//===============================================
GObservable::~GObservable() {
    
}
//===============================================
void GObservable::attach(GObserver* obs) {
    m_observer.push_back(obs);
}
//===============================================
void GObservable::detach(GObserver* obs) {
    vector<GObserver*>::iterator it;
    it = find(m_observer.begin(), m_observer.end(), obs);
    m_observer.erase(it);
}
//===============================================
void GObservable::notify() {
    for(int i = 0; i < m_observer.size(); i++) {
        m_observer[i]->update(this);
    }
}
//===============================================
