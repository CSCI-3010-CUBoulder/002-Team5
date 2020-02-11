CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all:

clean:
	rm UtilityFunctions.o main

main: UtilityFunctions.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp UtilityFunctions.o -o main

UtilityFunctions.o: UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) -c UtilityFunctions.cpp
