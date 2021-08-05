#ifndef MYSTRING_H
#define MYSTRING_H
#include <time.h>
#include <iostream>
#include <cstring>

 
using namespace std ;




class mystring
{
   private:
    char* holder ; 

   public:

   mystring( const char* str1 ) ;
   mystring (mystring& str1) ;
   int length() ;
   void append(const char* str2 ) ;
   void print() ;
   ~mystring() ;
   friend ostream& operator<<(ostream& os, const mystring& str1Obj) ;
   friend void printG(mystring obj1);
};






#endif