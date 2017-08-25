//===============================================
#include "GStrategy.h"
#include "GStrategyLine.h"
#include "GStrategyRect.h"
#include "GStrategyEllipse.h"
//===============================================
GStrategy::GStrategy() {
    
}
//===============================================
GStrategy::~GStrategy() {
    
}
//===============================================
GStrategy* GStrategy::Factory(eGType type) {
    switch(type) {
        case Line: return new GStrategyLine;
        case Rect: return new GStrategyRect;
        case Ellipse: return new GStrategyEllipse;
    }
    return 0;
}
//===============================================
