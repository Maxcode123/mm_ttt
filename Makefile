CPP=g++
SRC=src
SRCS=$(wildcard $(SRC)/*.cpp)
OBJ=obj
OBJS=$(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))
BINDIR=bin
BIN=$(BINDIR)/main
BASE=src/board.cpp src/position.cpp src/over_iostream.cpp

all: $(BIN)

$(BIN): $(OBJS)
	$(CPP) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CPP) -c $< -o $@

test-board: bintest
	$(CPP) src/tests/test_board.cpp $(BASE) -o bin/tests/test_board
	bin/tests/test_board

test-node: bintest
	$(CPP) src/tests/test_node.cpp $(BASE) -o bin/tests/test_node
	bin/tests/test_node

test-position: bintest
	$(CPP) src/tests/test_position.cpp src/position.cpp src/over_iostream.cpp -o bin/tests/test_position
	bin/tests/test_position

test-minimax: bintest
	$(CPP) src/tests/test_minimax.cpp src/minimax.cpp $(BASE) -o bin/tests/test_minimax
	bin/tests/test_minimax

bintest:
	mkdir -p bin/tests

clean:
	rm -rf $(BINDIR)/* $(OBJ)/*
