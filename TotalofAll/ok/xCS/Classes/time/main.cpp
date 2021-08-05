#include <iostream>
#include "mytime.h"


using namespace std ;




int main()
{

	mytime mytimeObject ;
	int hoursToAdd ;
    cout << "-------------------" << endl ;
	cout << "Current Time:" << endl ;
    mytimeObject.print() ;
    hoursToAdd  =  24 - mytimeObject.getHours()  ;
    mytimeObject.addHours( hoursToAdd ) ;
    cout << "Adding " << hoursToAdd << " hours.\n" ;
	mytimeObject.print() ;
    cout << "-------------------" << endl ;

    mytimeObject.set( 7, 58, 59 )  ;
    mytimeObject.print() ;
    mytimeObject.addSeconds( 1 ) ;
    cout << "Adding 1 second.\n" ;
    mytimeObject.print() ;
    cout << "-------------------" << endl ;

    mytimeObject.set( 7, 59, 59 )  ;
    mytimeObject.print() ;
    mytimeObject.addMinutes( 1 ) ;
    cout << "Adding 1 minute.\n" ;
    mytimeObject.print() ;
    cout << "-------------------" << endl ;


    mytimeObject.set( 23, 59, 59 )  ;
    mytimeObject.print() ;
    mytimeObject.addSeconds( 1 ) ;
    cout << "Adding 1 second.\n" ;
    mytimeObject.print() ;
    cout << "-------------------" << endl ;

   mytimeObject.set( 23, 59, 59 )  ;
   mytimeObject.print() ;
   mytimeObject.addSeconds( 120 ) ;
   cout << "Adding 120 seconds.\n" ;
   mytimeObject.print() ;
   cout << "-------------------" << endl ;

  return(0) ;
}





