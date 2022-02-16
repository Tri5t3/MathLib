CC = g++
CFLAGS = -O -g -Wall

demo: clean
	$(CC) $(CFLAGS) -o MathLibDemo demo.cpp

clean:
	rm MathLibDemo
