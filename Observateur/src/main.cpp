//===============================================
#include "GData.h"
#include "GViewLine.h"
#include "GViewBar.h"
#include "GViewPie.h"
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    GData* m_data = new GData;
    GViewLine* m_viewLine = new GViewLine;
    GViewBar* m_viewBar = new GViewBar;
    GViewPie* m_viewPie = new GViewPie;

    m_data->attach(m_viewLine);
    m_data->attach(m_viewBar);
    m_data->attach(m_viewPie);
    
    m_data->notify();
    cout << "-------------------------------------------------\n";
    m_data->change("SLOW_DATA");
    cout << "-------------------------------------------------\n";
    m_data->change("FAST_DATA");
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
