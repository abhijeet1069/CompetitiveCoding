CC = cc
CXX = g++
CCFLAGS = -g -std=c99 -Wall -Werror
CXXFLAGS = -g -std=gnu++14 -Wall -Werror

all : main test

main : bitset.cpp
	$(CXX) $(CXXFLAGS) -o main bitset.cpp

test : main
	./main

##main : demo.cpp
##	   $(CXX) $(CXXFLAGS) -o main demo.cpp

clean : 
	rm -f core *.o main
