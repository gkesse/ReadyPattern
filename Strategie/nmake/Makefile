GSRC = ../src
GBIN = bin
GBUILD = build
GTARGET = $(GBIN)/GProject.exe

GINCS =\
    /I$(GSRC)/manager
    
GOBJS =\
    $(GBUILD)/main.obj \
    $(GBUILD)/GStrategy.obj \
    $(GBUILD)/GStrategyLine.obj \
    $(GBUILD)/GStrategyRect.obj \
    $(GBUILD)/GStrategyEllipse.obj
    
all: $(GOBJS)
	link /OUT:$(GTARGET) $(GOBJS)
$(GBUILD)/main.obj: $(GSRC)/main.cpp
	cl /c /EHsc $(GSRC)/main.cpp /Fo$(GBUILD)/main.obj $(GINCS)
$(GBUILD)/GStrategy.obj: $(GSRC)/manager/GStrategy.cpp
	cl /c /EHsc $(GSRC)/manager/GStrategy.cpp /Fo$(GBUILD)/GStrategy.obj
$(GBUILD)/GStrategyLine.obj: $(GSRC)/manager/GStrategyLine.cpp
	cl /c /EHsc $(GSRC)/manager/GStrategyLine.cpp /Fo$(GBUILD)/GStrategyLine.obj
$(GBUILD)/GStrategyRect.obj: $(GSRC)/manager/GStrategyRect.cpp
	cl /c /EHsc $(GSRC)/manager/GStrategyRect.cpp /Fo$(GBUILD)/GStrategyRect.obj
$(GBUILD)/GStrategyEllipse.obj: $(GSRC)/manager/GStrategyEllipse.cpp
	cl /c /EHsc $(GSRC)/manager/GStrategyEllipse.cpp /Fo$(GBUILD)/GStrategyEllipse.obj
clean:
	del /Q $(GBUILD)\* $(GBIN)\*
