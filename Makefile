# Makefile for Project 0 

CXX = g++
CXXFLAGS = -std=c++17 -Wall

APP = b10tob2
OBJS = main.o myUtils.o

all: application

application: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(APP) $(OBJS)

main.o: main.cpp myUtils.h
	$(CXX) $(CXXFLAGS) -c main.cpp

myUtils.o: myUtils.cpp myUtils.h
	$(CXX) $(CXXFLAGS) -c myUtils.cpp

clean:
	rm -f *.o $(APP)
