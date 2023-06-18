#MY_MAKEFILE
EXE = play
FOLDER = bin

#Paths to look for
vpath %.h include
vpath %.cpp src 

#.cpp to compile
SRC1 = character.cpp main.cpp banya.cpp enemy.cpp room.cpp guard.cpp mage.cpp dragon.cpp funBattles.cpp
SRC = $(SRC1) funterminal.cpp mecanic.cpp saveandload.cpp fungame.cpp
#saving .o names
OBJ = $(patsubst %.cpp, %.o, $(SRC))

#Flags I need
FLAI = -I include -Wall -MMD -MP

#creating directory
all: $(EXE)
	mkdir $(FOLDER) || echo "[i] directory was already created"
	mv $(EXE) ./$(FOLDER)/$(EXE)

#compiling .o
$(EXE): $(OBJ)
	g++ $(OBJ) -o $(EXE)

#compiling .cpp
%.o: %.cpp
	g++ -c $(FLAI) $< -o $@

.PHONY: clean

#delete files git don´t need
clean: 
	rm -rf *.o *.d *.exe ./$(FOLDER)

#run exetucable
run: 
	./$(FOLDER)/$(EXE)



