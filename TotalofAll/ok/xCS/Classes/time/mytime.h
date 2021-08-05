#ifndef MYTIME_H
#define MYTIME_H
#include <time.h>
#include <iostream>

using namespace std ;

class mytime
{
   private:
    int hours ;
    int minutes  ;
    int seconds ;

   public:
      //sets the hours, minutes and seconds
      mytime( int hourP , int minutesP , int secondsP ) ;

      //Default constructor sets the hours minutes and seconds
      //to the current time
      mytime()  ;

     void print() ;

     void addSeconds( int secondsP ) ;

     void addMinutes( int minutesP ) ;

     void addHours( int hoursP )  ;

     int getSeconds() ;

     int getMinutes() ;

     int getHours()  ;

	 void set( int hoursP, int minutesP, int secondsP ) ;








};






#endif