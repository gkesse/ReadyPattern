# Patron de Conception Stratégie

Le Patron de Conception **Stratégie** est sollicité lorsqu'on désire changer 
d'algorithme de façon dynamique. Il permet de permuter dynamiquement les algorithmes 
utilisés au sein d'un module. 

# Programme Principal Stratégie

Le programme principal de test :

```
//===============================================
#include "GStrategy.h"
#include <vector>
//===============================================
int main(int argc, char** argv) {
    cout << "-------------------------------------------------\n";
    vector<GStrategy*> m_strategy;
    m_strategy.push_back(GStrategy::Factory(GStrategy::Line));
    m_strategy.push_back(GStrategy::Factory(GStrategy::Rect));
    m_strategy.push_back(GStrategy::Factory(GStrategy::Ellipse));
    
    for(int i = 0; i < m_strategy.size(); i++) {
        m_strategy[i]->draw();
    }
    cout << "-------------------------------------------------\n";
    return 0;
}
//===============================================
```

# Résutats Stratégie

Les résultats du programme de test:  

![Result](https://raw.githubusercontent.com/gkesse/ReadyPattern/master/Strategie/img/result.png)
