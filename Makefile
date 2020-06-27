CXX := g++
CXXFLAGS := -std=gnu++17 -Wall -Wextra -O2
DIR := hello

# $(DIR)/a.out: $(DIR)/Main.cpp
# 	$(CXX) $(CXXFLAGS) -o $@ $^

SOURCE := $(wildcard $(DIR)/*.cpp)
TARGET := $(SOURCE:.cpp=.out)

.PHONY: all
all: $(TARGET)

%.out: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^
