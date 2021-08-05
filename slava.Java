/*
Programmer: Svyatoslav Paramonov
HW: Hw3
Course: Java 111B
Objective: This program asks user for a social sevurity number and validates it.
*/


import java.util.*;

class Hw3
{
  public static void main (String...args)
  {
    String ssnum;
Scanner ssnumx = new Scanner (System.in);
         System.out.print ("Enter SSN: ");
     ssnum = ssnumx.nextLine();
for (;;)
while(true)
  isNumber(ssnum);
  }
public static boolean isNumber (String str)
{ 
  for  (int i = 0; i<str.length();i++)
  {
    if(!Character.isDigit(str.charAt(i))) return false;
  }
  String first = str.substring(0,3);
  String mid = str.substring (4,6);
  String last = str.substring(7);
  if(isNumber (first) &&  isNumber (mid) && isNumber (last)) System.out.println("It is a valid ssnum");
  else
    System.out.println("It is an invalid ssnum");
  return true;
}
}
