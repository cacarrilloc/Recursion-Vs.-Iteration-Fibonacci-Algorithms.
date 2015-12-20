#Author: Carlos Carrillo
#Date:   12/01/2015
#Description: This is the makefile for Lab_10

#This target will compile the entire program

All: total

total:	main.o FibonacciR.o FibonacciNR.o 
	g++ main.o FibonacciR.o FibonacciNR.o -O2 -o test

main.o: main.cpp
	g++ -c main.cpp

FibonacciR.o: FibonacciR.cpp
	g++ -c FibonacciR.cpp

FibonacciNR.o: FibonacciNR.cpp
	g++ -c FibonacciNR.cpp

clean:
	rm -rf *o total