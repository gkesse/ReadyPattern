//===============================================
#ifndef _GData_
#define _GData_
//===============================================
#include "GObservable.h"
//===============================================
class GData : public GObservable {
public:
    GData();
    ~GData();

public:
    string getData() const;
    
public:
    void change(const string& data);

private:
    string m_data;
};
//===============================================
#endif
//===============================================
