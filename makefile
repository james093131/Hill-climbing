all:
	g++ -Wall -O3 -o HC main.cpp

clean:
	rm -f main *.o
