# Tommy Kong
# 9081632904
# kong42@wisc.edu
CC = g++
CFLAGS = -O -g -Wall

demo: clean
	$(CC) $(CFLAGS) -o MathLibDemo demo.cpp

MathLib.o: MathLib.h MathLib.cpp
	$(CXX) $(CXXFLAGS) -c MathLib.cpp

clean:
	rm MathLibDemo
	rm *.o
