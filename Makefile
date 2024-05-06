# Makefile

# Compiler

CXX = g++

# Compiler flags

CXXFLAGS = -std=c++11 -Wall -Wextra

# Executable name

TARGET = test_runner

# Source files

SRCS = main.cpp Invoice.cpp

# Build and run tests

.PHONY: all

all:

    $(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

    ./$(TARGET)

# Clean rule

.PHONY: clean

clean:

    rm -f $(TARGET)