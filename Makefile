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

# *.c
$(BINDIR)/%.exe: $(SRCDIR)/%.$(CEXT)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) -o $@ $<

# *.cpp
$(BINDIR)/%.exe: $(SRCDIR)/%.$(CPPEXT)
	@mkdir -p $(BINDIR)
	$(CXX) $(CPPFLAGS) -o $@ $<

clean:
	echo " Cleaning..."; 
	$(RM) -r $(BINDIR)


.PHONY: clean
