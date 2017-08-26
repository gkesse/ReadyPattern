# Patron de Conception Singleton

Le Patron de Conception **Singleton** est sollicité lorsqu'on désire utiliser 
une instance unique d'un module dans une application. Il permet de mieux coordonner 
les opération au sein d'un système.

# Programme Principal Singleton

Le programme principal de test :

```
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
```

# Résutats Singleton

Les résultats du programme de test: 

![Result](https://raw.githubusercontent.com/gkesse/ReadyPattern/master/Singleton/img/result.png)
