/**********************************************************
 ** Author: Carlos Carrillo                               *
 ** Date:   12/01/2015                                    *
 ** Description: This is the class implementation file    *
 *  of a class called Queue. This class FibonacciNR. This *
 ** class iteratively performs the Fibonacci sequence.    *
 *********************************************************/


#include <iostream>
#include "FibonacciNR.hpp"

using namespace std;

/******************************************
**             Constructor                *
******************************************/
FibonacciNR::FibonacciNR()
{
    num = 0;
}

/********************************************************************
 *                         FibonacciNR                              *
 * This function iteratively performs the Fibonacci sequence. This  *
 * algorithm was taken from http: //www.codeproject.com/Tips/109443 *
 * /Fibonacci-Recursive-and-Non-Recursive-C                         *
 ******************************************************************/

int FibonacciNR::NRFibonacci(int n)
{
    int first = 0;
    int second=1;
    int counter=2;
    
    while(counter < n){
        int temp=second;
        second=first+second;
        first=temp;
        ++counter;}
    if(n==0)
        return 0;
    else
        return first+second;
}