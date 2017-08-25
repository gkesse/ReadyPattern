# Patron de Conception Strat�gie

Le Patron de Conception **Strat�gie** est sollicit� lorsqu'on d�sire utiliser 
une strat�gie parmi plusieurs. Il se comporte comme un multiplexeur �lectronique. 
Sa conception est rendue possible gr�ce aux concepts de l'h�ritage de classe 
et des m�thodes virtuelles.

# Programme Principal Strat�gie

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

# R�sutats Strat�gie

Les r�sultats du programme principal de test:  

![Result](https://raw.githubusercontent.com/gkesse/ReadyPattern/master/Strategie/img/result.png)
