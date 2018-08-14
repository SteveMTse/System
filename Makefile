COMPILER=g++-8
LIBS=Standard.hpp Users.hpp
FILES=main.cpp
EXE=./a.out
REMOVER=./remover.sh

all:
	$(COMPILER) $(LIBS) $(FILES)
	$(EXE)
	$(REMOVER)

compile:
	$(COMPILER) $(LIBS) $(FILES)
	$(REMOVER)
