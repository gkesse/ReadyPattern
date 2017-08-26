# Patron de Conception Observateur

Le Patron de Conception **Observateur** est sollicité lorsqu'on désire envoyer 
des notifications à des modules. Il permet de réaliser des connexions entre des modules. 

# Programme Principal Observateur

Le programme principal de test :

```
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
```

# Résutats Observateur

Les résultats du programme de test:  

![Result](https://raw.githubusercontent.com/gkesse/ReadyPattern/master/Observateur/img/result.png)
