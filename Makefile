CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: main

clean:
	rm UtilityFunctions.o main

main: UtilityFunctions.o main.cpp
	$(CXX) $(CXXFLAGS) UtilityFunctions.o main.cpp -o main

UtilityFunctions.o: UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) -c UtilityFunctions.cpp
