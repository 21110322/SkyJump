CXX = g++
CXXFLAGS = -std=c++11 -Wall
BIN_DIR = bin
SRC_DIR = src

all: $(BIN_DIR)/main

$(BIN_DIR)/main: $(SRC_DIR)/main.cpp $(SRC_DIR)/SkyJump.cpp $(SRC_DIR)/Jumper.cpp $(SRC_DIR)/Parachute.cpp
	$(CXX) $(CXXFLAGS) -Iinclude $^ -o $@

clean:
	rm -rf $(BIN_DIR)/*
