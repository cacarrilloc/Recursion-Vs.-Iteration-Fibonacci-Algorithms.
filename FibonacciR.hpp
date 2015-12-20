 /**********************************************************
 ** Author: Carlos Carrillo                               *
 ** Date:   12/01/2015                                    *
 ** Description: This is the class specification file     *
 *  of a class called FibonacciR. This class iteratively *
 ** performs the Fibonacci sequence.                      *
 *********************************************************/

#ifndef FibonacciR_hpp
#define FibonacciR_hpp

//Class Declaration
class FibonacciR
{
private:
    int num;
    
public:
    FibonacciR();
    virtual ~FibonacciR(){};
    int recursiveFibonacci(int);
};
#endif

