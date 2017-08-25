# Patron de Conception Stratégie

Le Patron de Conception **Stratégie** est sollicité lorsqu'on désire utiliser 
une stratégie parmi plusieurs. Il se comporte comme un multiplexeur électronique. 
Sa conception est rendue possible grâce aux concepts de l'héritage de classe 
et des méthodes virtuelles.

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

Les résultats du programme principal de test:  

![Result](https://raw.githubusercontent.com/gkesse/ReadyPattern/master/Strategie/img/result.png)
