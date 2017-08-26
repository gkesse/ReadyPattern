GSRC = ../src
GBIN = bin
GBUILD = build
GTARGET = $(GBIN)/GProject.exe

GINCS =\
    /I$(GSRC)/manager
    
GOBJS =\
    $(GBUILD)/main.obj \
    $(GBUILD)/GObserver.obj \
    $(GBUILD)/GObservable.obj \
    $(GBUILD)/GData.obj \
    $(GBUILD)/GViewLine.obj \
    $(GBUILD)/GViewBar.obj \
    $(GBUILD)/GViewPie.obj
    
all: $(GOBJS)
	link /OUT:$(GTARGET) $(GOBJS)
$(GBUILD)/main.obj: $(GSRC)/main.cpp
	cl /c /EHsc $(GSRC)/main.cpp /Fo$(GBUILD)/main.obj $(GINCS)
$(GBUILD)/GObserver.obj: $(GSRC)/manager/GObserver.cpp
	cl /c /EHsc $(GSRC)/manager/GObserver.cpp /Fo$(GBUILD)/GObserver.obj
$(GBUILD)/GObservable.obj: $(GSRC)/manager/GObservable.cpp
	cl /c /EHsc $(GSRC)/manager/GObservable.cpp /Fo$(GBUILD)/GObservable.obj
$(GBUILD)/GData.obj: $(GSRC)/manager/GData.cpp
	cl /c /EHsc $(GSRC)/manager/GData.cpp /Fo$(GBUILD)/GData.obj
$(GBUILD)/GViewLine.obj: $(GSRC)/manager/GViewLine.cpp
	cl /c /EHsc $(GSRC)/manager/GViewLine.cpp /Fo$(GBUILD)/GViewLine.obj
$(GBUILD)/GViewBar.obj: $(GSRC)/manager/GViewBar.cpp
	cl /c /EHsc $(GSRC)/manager/GViewBar.cpp /Fo$(GBUILD)/GViewBar.obj
$(GBUILD)/GViewPie.obj: $(GSRC)/manager/GViewPie.cpp
	cl /c /EHsc $(GSRC)/manager/GViewPie.cpp /Fo$(GBUILD)/GViewPie.obj
clean:
	del /Q $(GBUILD)\* $(GBIN)\*
