CXX = g++
CXXFLAGS = -Wall

test: Warrior.o test.cpp
	$(CXX) $(CXXFLAGS) Dice.o Warrior.o test.cpp -o test

Dice.o: Dice.h Dice.cpp
	$(CXX) $(CXXFLAGS) -c Dice.cpp

Warrior.o: Dice.o RPC.cpp RPC.h Warrior.h Warrior.cpp
	$(CXX) $(CXXFLAGS) -c Warrior.cpp

#easy compiling for running with GDB
debug: RPC.o test.cpp
	$(CXX) $(CXXFLAGS) -g RPC.o Warrior.o test.cpp -o debug

run: test
	./test

rundebug: debug
	./debug

clean:
	rm *.o
	rm test
	rm *~
	rm *#
