IDIR = ../include
CC = g++
CFLAGS = -I$(IDIR) -std=c++14
ODIR = obj
_DEPS = Pirate.h Raid.h Ship.h
DEPS = $(patsubst %, $(IDIR)/%, $(_DEPS))
_OBJ = main.o Pirate.o Raid.o Ship.o
OBJ = $(patsubst %,$(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

testMain: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
