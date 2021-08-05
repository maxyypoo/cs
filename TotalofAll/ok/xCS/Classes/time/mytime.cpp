#include "mytime.h"



mytime::mytime( int hourP , int minutesP , int secondsP )
      {
        hours = hourP;
        minutes = minutesP;
        seconds = secondsP;


      }

mytime::mytime()
       {

		   time_t theTime = time(NULL)  ;
		   struct tm *aTime = localtime(&theTime)  ;

		   hours = aTime->tm_hour  ;
           minutes = aTime->tm_min  ;
           seconds =  aTime->tm_sec ;

	   }

void mytime::set( int hoursP, int minutesP, int secondsP )
{

        hours = hoursP;
        minutes = minutesP;
        seconds = secondsP;
}

int mytime::getSeconds()
{
   return seconds;
}

int mytime::getMinutes()
 {
   return minutes;
 }

int mytime::getHours()
{
  return hours;
}

void mytime::addSeconds( int secondsP )
    {
        int minutesToAdd;
        seconds += secondsP;
        
        if (seconds >= 60){
          minutesToAdd = seconds / 60;
          seconds = seconds % 60;
          addMinutes (minutesToAdd);
        }
        
  

    }

void mytime::addMinutes( int minutesP )
    {
		 int HoursToAdd;
        minutes += minutesP;
        
        if (minutes >= 60){
          HoursToAdd = minutes / 60;
          minutes = minutes % 60;
          addHours (HoursToAdd);
        }
    }


void mytime::addHours( int hoursP )
   {
        hours += hoursP;
        
        if (hours >= 24)
          hours %= 24;
        
   }


void  mytime::print()
{
   cout << "Hours: " << hours << " Minutes:" <<
   minutes << " Seconds:" << seconds << endl ;

}

