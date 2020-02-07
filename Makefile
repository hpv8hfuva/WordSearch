#Hunter Vaccaro
#hpv8hf
#Lab Section 11:00 am
CXX = clang++ -O2 $(CXXFLAGS)
CXXFLAGS = -std=c++11
DEBUG = -Wall -g
.SUFFIXES: .o .cpp

wordPuzzRun: hashTable.o wordPuzzle.o timer.o
	$(CXX) $(DEBUG) hashTable.o wordPuzzle.o timer.o

hashTable.o: hashTable.cpp hashTable.h
	$(CXX) -c hashTable.cpp

wordPuzzle.o: wordPuzzle.cpp 
	$(CXX) -c wordPuzzle.cpp

timer.o: timer.h timer.cpp 
	$(CXX) -c timer.cpp

clean:
	-rm *.o *~ wordPuzzRun.exe
