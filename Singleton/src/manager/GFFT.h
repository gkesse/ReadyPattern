//===============================================
#ifndef _GFFT_
#define _GFFT_
//===============================================
#include <string>
//===============================================
using namespace std;
//===============================================
class GFFT {
public:
    GFFT();
    ~GFFT();
    
private:
    static GFFT* m_instance;
};
//===============================================
#endif
//===============================================
