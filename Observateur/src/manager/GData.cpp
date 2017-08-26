//===============================================
#include "GData.h"
//===============================================
GData::GData() {
    m_data = "_NODATA_";
}
//===============================================
GData::~GData() {
    
}
//===============================================
string GData::getData() const {
    return m_data;
}
//===============================================
void GData::change(const string& data) {
    if(m_data == data) return;
    m_data = data;
    notify();
}
//===============================================
