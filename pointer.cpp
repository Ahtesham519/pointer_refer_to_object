//pointer.cpp     
//pointer refer to object

#include <iostream>
using namespace std;

class Test 
{
public :
   explicit Test ( int = 0);  // default constructor
   void  print() const;
   private :
   int x ;
}; //end class Test

//Constructor
Test::Test( int value )
; x(vlaue) // initialize x to value
{
//empty body
}// end constructor test

//print x using implicit and explicit this pointers;
//the parentheses around *this* are required

void Test::print() const
