# Makefile for main.cpp, calculator.cpp, and processInput.o

# Compiler
CXX := g++

# Compiler flags
CXXFLAGS := -std=c++11 -Wall

# Source files
SRCS := main.cpp calculator.cpp
HEADERS := main.h calculator.h processInput.h

# Object files
OBJS := $(SRCS:.cpp=.o)

# Target executable
TARGET := magic-calculator

# Rule to build the executable
$(TARGET): $(OBJS) processInput.o
	$(CXX) $(CXXFLAGS) $^ -o $@

# Rule to build object files
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Default target
all: $(TARGET)

# Clean target
clean:
	rm -f $(OBJS) $(TARGET)
