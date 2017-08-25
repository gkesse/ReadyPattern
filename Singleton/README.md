# Patron de Conception Singleton

Le Patron de Conception **Singleton** est sollicité lorsqu'on désire 
utiliser la même instance d'une classe dans tout le programme. 
Il se comporte comme un système centralisé en étoile. 
Sa conception est rendue possible grâce aux concepts des variables et 
des méthodes statiques.

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
