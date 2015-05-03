.PHONY: clean allcpp allc

CXX := g++
SRCDIR := src
BINDIR := bin
 
CPPEXT := cpp
CPPSOURCES := $(shell find $(SRCDIR) -type f -name *.$(CPPSRCEXT))
CPPOBJECTS := $(patsubst $(SRCDIR)/%,$(BINDIR)/%,$(SOURCES:.$(CPPEXT)=.exe))
CPPFLAGS := -g -Wno-write-strings

allcpp: $(CPPOBJECTS)
	@true

# *.cpp
$(BINDIR)/%.exe: $(SRCDIR)/%.$(CPPEXT) $(SRCDIR)/common.h
	@mkdir -p $(BINDIR)
	$(CXX) $(CPPFLAGS) -o $@ $<

clean:
	echo " Cleaning..."; 
	$(RM) -r $(BINDIR)

