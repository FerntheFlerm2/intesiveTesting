CXX=clang++
FLAGS = -std=c++20 -Wall -O3

.PHONY:test functions.o

all: test

test: functions.o test.cpp catch.hpp
	$(CXX) $(FLAGS) test.cpp functions.o -o test 

functions.o:
	$(CXX) $(FLAGS) -c functions_to_implement.cpp -o functions.o

clean:
	rm functions.o test