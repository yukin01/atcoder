CXX := g++
CXXFLAGS := -std=gnu++17 -Wall -Wextra -O2
DIR := hello

# build: ./$(DIR)/Main.cpp
# 	$(CXX) $(CXXFLAGS) -o ./$(DIR)/a.out ./$(DIR)/Main.cpp
$(DIR)/a.out: $(DIR)/Main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^
