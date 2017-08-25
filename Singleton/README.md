# Patron de Conception Singleton

Le Patron de Conception **Singleton** est sollicit� lorsqu'on d�sire 
utiliser la m�me instance d'une classe dans tout le programme. 
Il se comporte comme un syst�me centralis� en �toile. 
Sa conception est rendue possible gr�ce aux concepts des variables et 
des m�thodes statiques.

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

# R�sutats Singleton

Les r�sultats du programme de test: 

![Result](https://raw.githubusercontent.com/gkesse/ReadyPattern/master/Singleton/img/result.png)
