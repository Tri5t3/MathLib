CC = g++
CFLAGS = -O -g -Wall

demo: clean
	$(CC) $(CFLAGS) -o MathLibDemo demo.cpp

MathLib.o: MathLib.h MathLib.cpp
	$(CXX) $(CXXFLAGS) -c MathLib.cpp

clean:
	rm MathLibDemo
	rm *.o
