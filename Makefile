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

test-node:
	$(CPP) src/test/test_node.cpp src/board.cpp src/position.cpp  src/over_iostream.cpp -o bin/test/test_node
	bin/test/test_node

test-position:
	$(CPP) src/test/test_position.cpp src/position.cpp src/over_iostream.cpp -o bin/test/test_position
	bin/test/test_position

clean:
	rm -rf $(BINDIR)/* $(OBJ)/*
