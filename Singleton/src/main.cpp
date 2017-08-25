//===============================================
#include "GSingleton.h"
#include <iostream>
//===============================================
using namespace std;
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    GSingleton::Instance()->showData();
    GSingleton::Instance()->setData("Hello World!");
    GSingleton::Instance()->showData();
    GSingleton::Instance()->setData("Hello Singleton!");
    GSingleton::Instance()->showData();
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
