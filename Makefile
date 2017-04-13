CXX = g++
CXXFLAGS = -Wall

test: RPC.o test.cpp
	$(CXX) $(CXXFLAGS) RPC.o test.cpp -o test

RPC.o: RPC.cpp RPC.h
	$(CXX) $(CXXFLAGS) -c RPC.cpp

#easy compiling for running with GDB
debug: RPC.o test.cpp
	$(CXX) $(CXXFLAGS) -g RPC.o test.cpp -o debug

run:
	./test

rundebug:
	./debug

clean:
	rm *.o
	rm *~
