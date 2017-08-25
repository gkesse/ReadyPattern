GSRC = ../src
GBIN = bin
GBUILD = build
GTARGET = $(GBIN)/GProject.exe

GINCS =\
    /I$(GSRC)/manager
    
GOBJS =\
    $(GBUILD)/main.obj \
    $(GBUILD)/GSingleton.obj
    
all: $(GOBJS)
	link /OUT:$(GTARGET) $(GOBJS)
$(GBUILD)/main.obj: $(GSRC)/main.cpp
	cl /c /EHsc $(GSRC)/main.cpp /Fo$(GBUILD)/main.obj $(GINCS)
$(GBUILD)/GSingleton.obj: $(GSRC)/manager/GSingleton.cpp
	cl /c /EHsc $(GSRC)/manager/GSingleton.cpp /Fo$(GBUILD)/GSingleton.obj
clean:
	del /Q $(GBUILD)\* $(GBIN)\*
