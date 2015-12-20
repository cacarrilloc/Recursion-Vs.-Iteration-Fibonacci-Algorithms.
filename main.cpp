/*********************************************************
 ** Author: Carlos Carrillo                              *
 ** Date:   10/30/2015                                   *
 ** Description: This program measures the running time  *
 ** of four different recursive and iterative functions. *
 ********************************************************/

#include <iostream>
#include <algorithm>
#include <ctime>
#include "FibonacciR.hpp"
#include "FibonacciNR.hpp"

using namespace std;

int rfactorial (int);
int factorialHelper (int, int);
int factorial(int n);

int main()
{
    clock_t t1;
    clock_t t2;
    clock_t t3;
    clock_t t4;
    
    FibonacciR myFibonacciR;
    FibonacciNR myFibonacciNR;
    
    cout <<"\n\n*** WELCOME TO THE RUNNING-TIME-COMPARISON PROGRAM ***\n"<<endl;
    
    // performs the Fibonacci sequence from 0 to 40.
    cout << "The first 40 Fibonacci numbers are being calculated..."<<endl;
    t1 = clock();
    for (int x = 0; x<40; x++){
        myFibonacciR.recursiveFibonacci(x);}
    t1 = clock() - t1;
    cout <<"RECURSIVE-FIBONACCI RUNNING TIME = "<<t1/(double)CLOCKS_PER_SEC<<"\n"<<endl;

    // performs the Fibonacci sequence from 0 to 4000.
    cout << "The first 4000 Fibonacci numbers are being calculated..."<<endl;
    t2 = clock();
    for (int x = 0; x<4000; x++){
        myFibonacciNR.NRFibonacci(x);}
    t2 = clock() - t2;
    cout <<"NON-RECURSIVE-FIBONACCI RUNNING TIME = "<<t2/(double)CLOCKS_PER_SEC<<"\n"<<endl;
    
    //recursively calculates factorial numbers.
    cout << "Not-tail recursive factorial function is working..."<<endl;
    t3 = clock();
    for (int x = 0; x<90000000; x++){
        rfactorial(12);}
    t3 = clock() - t3;
    cout <<"NOT-TAIL RECURSIVE FACTORIAL RUNNING TIME = "<<t3/(double)CLOCKS_PER_SEC<<"\n"<<endl;
    
    //recursively calculates factorial numbers using the tail recursive method.
    cout << "Tail recursive factorial function is working..."<<endl;
    t4 = clock();
    for (int x = 0; x<90000000; x++){
        factorial(12);}
    t4 = clock() - t4;
    cout <<"TAIL RECURSIVE FACTORIAL RUNNING TIME = "<<t4/(double)CLOCKS_PER_SEC<<"\n"<<endl;
    
    cout <<"*** THE COMPARISON IS OVER!! ***\n"<<endl;

    return 0;
}

/*******************************************************************
 *                         rfactorial                              *
 * This function recursively calculates factorial numbers. This    *
 * algorithm was taken from Gaddis (2014), pag. 906.               *
 ******************************************************************/

int rfactorial (int num)
{
    if (num == 0){ // base case
        return 1;}
    
    else{
        return num * rfactorial(num - 1);}
}

/*******************************************************************
 *                      factorialHelper                            *
 * This function helps the factorial function to recursively       *
 * calculate factorial numbers.                                    *
 ******************************************************************/

int factorialHelper (int n, int result)
{
    if (n == 1){
        return result;}
    
    else{
        return factorialHelper((n-1), (n*result));}
}

/*******************************************************************
 *                           factorial                             *
 * This function recursively calculates factorial numbers.         *
 ******************************************************************/
int factorial(int n)
{
    return factorialHelper(n, 1);
}
