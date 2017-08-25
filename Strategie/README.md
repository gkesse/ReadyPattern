# Stratégie Programme Principal

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

# Stratégie Resutat

![Result](https://raw.githubusercontent.com/gkesse/ReadyPattern/master/Singleton/img/result.png)
