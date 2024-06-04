CC = g++
CFLAGS = -Wall -std=c++11
INCLUDES = -I./include
SOURCES = $(wildcard ./src/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = bin/doodlejump

all: $(TARGET)

$(TARGET): $(OBJECTS)
    $(CC) $(CFLAGS) $(INCLUDES) -o $@ $^

%.o: %.cpp
    $(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
    rm -f $(OBJECTS) $(TARGET)

run: $(TARGET)
    ./$(TARGET)
