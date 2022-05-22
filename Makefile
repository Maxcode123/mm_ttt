CPP=g++
SRC=src
SRCS=$(wildcard $(SRC)/*.cpp)
OBJ=obj
OBJS=$(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))
BINDIR=bin
BIN=$(BINDIR)/main
BINDIRT=bin/tesKard $(BINDIRT)/*)

all: $(BIN)

$(BIN): $(OBJS)
	$(CPP) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CPP) -c $< -o $@

test-board:
	$(CPP) src/test/test_board.cpp src/board.cpp src/over_iostream.cpp src/position.cpp -o bin/test/test_board
	bin/test/test_board

clean:
	rm -rf $(BINDIR)/* $(OBJ)/*
