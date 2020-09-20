#all : a.out

HDIR=./headers
SDIR=./SRC
BIN=./bin

CC=g++
CFLAGS=


Calculator : main.o UNIT.o BASE.o Deg_UNIT.o Rad_UNIT.o Grd_UNIT.o Bin_BASE.o Oct_BASE.o Dec_BASE.o Hex_BASE.o
	$(CC) $(BIN)/*.o -o Calculator

main.o : $(SDIR)/main.cpp $(HDIR)/*.h
	$(CC) -c $(SDIR)/main.cpp -o $(BIN)/main.o

Bin_BASE.o : $(SDIR)/Bin_BASE.cpp $(HDIR)/Bin_BASE.h $(HDIR)/BASE.h
	$(CC) -c  $(SDIR)/Bin_BASE.cpp -o $(BIN)/Bin_BASE.o

Oct_BASE.o : $(SDIR)/Oct_BASE.cpp $(HDIR)/Oct_BASE.h $(HDIR)/BASE.h
	$(CC) -c  $(SDIR)/Oct_BASE.cpp -o $(BIN)/Oct_BASE.o

Dec_BASE.o : $(SDIR)/Dec_BASE.cpp $(HDIR)/Dec_BASE.h $(HDIR)/BASE.h
	$(CC) -c  $(SDIR)/Dec_BASE.cpp -o $(BIN)/Dec_BASE.o

Hex_BASE.o : $(SDIR)/Hex_BASE.cpp $(HDIR)/Hex_BASE.h $(HDIR)/BASE.h
	$(CC) -c  $(SDIR)/Hex_BASE.cpp -o $(BIN)/Hex_BASE.o

BASE.o : $(SDIR)/BASE.cpp $(HDIR)/BASE.h
	$(CC) -c $(SDIR)/BASE.cpp -o $(BIN)/BASE.o 

Deg_UNIT.o : $(SDIR)/Deg_UNIT.cpp $(HDIR)/Deg_UNIT.h $(HDIR)/UNIT.h
	$(CC) -c $(SDIR)/Deg_UNIT.cpp -o $(BIN)/Deg_UNIT.o

Rad_UNIT.o : $(SDIR)/Rad_UNIT.cpp $(HDIR)/Rad_UNIT.h $(HDIR)/UNIT.h
	$(CC) -c $(SDIR)/Rad_UNIT.cpp -o $(BIN)/Rad_UNIT.o

Grd_UNIT.o : $(SDIR)/Grd_UNIT.cpp $(HDIR)/Grd_UNIT.h $(HDIR)/UNIT.h
	$(CC) -c $(SDIR)/Grd_UNIT.cpp -o $(BIN)/Grd_UNIT.o


UNIT.o : $(SDIR)/UNIT.cpp $(HDIR)/UNIT.h
	$(CC) -c $(SDIR)/UNIT.cpp -o $(BIN)/UNIT.o


clean :
	rm -rf $(BIN)/ a
	mkdir ./bin/
