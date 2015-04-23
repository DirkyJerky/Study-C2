.PHONY: clean allcpp allc

CC := gcc
CXX := g++
SRCDIR := src
BINDIR := bin
 
CEXT := c
CPPEXT := cpp
CSOURCES := $(shell find $(SRCDIR) -type f -name *.$(CSRCEXT))
CPPSOURCES := $(shell find $(SRCDIR) -type f -name *.$(CPPSRCEXT))
COBJECTS := $(patsubst $(SRCDIR)/%,$(BINDIR)/%,$(SOURCES:.$(CEXT)=.exe))
CPPOBJECTS := $(patsubst $(SRCDIR)/%,$(BINDIR)/%,$(SOURCES:.$(CPPEXT)=.exe))
CFLAGS := -g # -Wall
CPPFLAGS := -g # -Wall

allcpp: $(CPPOBJECTS)
	@true

allc: $(COBJECTS)
	@true

# *.c
$(BINDIR)/%.exe: $(SRCDIR)/%.$(CEXT) $(SRCDIR)/common.h
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) -o $@ $<

# *.cpp
$(BINDIR)/%.exe: $(SRCDIR)/%.$(CPPEXT) $(SRCDIR)/common.h
	@mkdir -p $(BINDIR)
	$(CXX) $(CPPFLAGS) -o $@ $<

clean:
	echo " Cleaning..."; 
	$(RM) -r $(BINDIR)


