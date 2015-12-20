/**********************************************************
 ** Author: Carlos Carrillo                               *
 ** Date:   12/01/2015                                    *
 ** Description: This is the class specification file     *
 *  of a class called FibonacciNR. This class iteratively *
 ** performs the Fibonacci sequence.                      *
 *********************************************************/

#ifndef FIBONACCINR_hpp
#define FIBONACCINR_hpp

//Class Declaration
class FibonacciNR
{
private:
    int num;
    
public:
    FibonacciNR();
    virtual ~FibonacciNR(){};
    int NRFibonacci(int);
};
#endif

