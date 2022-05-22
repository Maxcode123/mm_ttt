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
	$(CPP) src/tests/test_board.cpp src/board.cpp src/over_iostream.cpp src/position.cpp -o bin/tests/test_board
	bin/tests/test_board

test-node:
	$(CPP) src/tests/test_node.cpp src/board.cpp src/position.cpp  src/over_iostream.cpp -o bin/tests/test_node
	bin/tests/test_node

test-position:
	$(CPP) src/tests/test_position.cpp src/position.cpp src/over_iostream.cpp -o bin/tests/test_position
	bin/tests/test_position

test-minimax:
	$(CPP) src/tests/test_minimax.cpp src/minimax.cpp src/over_iostream.cpp src/board.cpp src/position.cpp -o bin/tests/test_minimax
	bin/tests/test_minimax

clean:
	rm -rf $(BINDIR)/* $(OBJ)/*
