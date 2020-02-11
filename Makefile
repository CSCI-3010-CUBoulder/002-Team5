CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all:

clean:
	rm UtiltiyFunctions.o main

main: main.cpp
	$(CXX) $(CXXFLAGS) UtilityFunctions.cpp main.cpp -o main

UtilityFunctions.cpp: UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) -c UtilityFunctions.cpp
