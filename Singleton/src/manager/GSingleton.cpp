//===============================================
#include "GSingleton.h"
//===============================================
GSingleton* GSingleton::m_instance = 0;
//===============================================
GSingleton::GSingleton() {
    m_data = "_NONE_";
}
//===============================================
GSingleton::~GSingleton() {
    
}
//===============================================
GSingleton* GSingleton::Instance() {
    if(m_instance == 0) {
        m_instance = new GSingleton;
    }
    return m_instance;
}
//===============================================
void GSingleton::setData(const string& data) {
    m_data = data;
}
//===============================================
void GSingleton::showData() const {
    cout << m_data << "\n";
}
//===============================================
