/**********************************************************
 ** Author: Carlos Carrillo                               *
 ** Date:   12/01/2015                                    *
 ** Description: This is the class implementation file    *
 *  of a class called Queue. This class FibonacciR. This  *
 ** class recursively performs the Fibonacci sequence.    *
 *********************************************************/


#include <iostream>
#include "FibonacciR.hpp"

using namespace std;

/******************************************
**             Constructor                *
******************************************/
FibonacciR::FibonacciR()
{
    num = 0;
}

/*******************************************************************
 *                      recursiveFibonacci                         *
 * This function recursively performs the Fibonacci sequence. This *
 * This algorithm was taken from Gaddis (2014), pag. 910.          *
 ******************************************************************/

int FibonacciR::recursiveFibonacci(int n)
{
    if (n <= 0) // base case
        return 0;
    else if (n == 1) // base case
        return 1;
    else
        return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
    
}