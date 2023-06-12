#MY_MAKEFILE
EXE = play
FOLDER = bin

#Paths to look for
vpath %.h include
vpath %.cpp src 

#.cpp to compile
SRC = character.cpp main.cpp
#saving .o names
OBJ = $(patsubst %.cpp, %.o, $(SRC))

#Flags I need
FLAI = -I include

#creating directory
all: $(EXE)
	mkdir $(Folder)
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
	rm -rf *.o *.exe ./$(FOLDER)

#run exetucable
run: 
	./$(FOLDER)/$(EXE)



