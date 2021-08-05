//Name: Doga Akpinaroglu
//Hw: Hw#3 - SSN validator
//Class: CS111B - Java Programming
//Objective: Take in SSN numbers from the user, and check their validity until the user decides to stop


import java.util.*;

class SocSec 
{
  //Checks if the stirng is made up of numbers or not by parsing thourgh the string and cathcing the error and returning true if a non number character is seen
  public static boolean isNumber (String num)
  {
     for  (int i = 0; i< num.length();i++)
  {
    if(!(Character.isDigit(num.charAt(i)))) 
      return false;
  }
  
  //Checks if the SSN is valid
  public static boolean checkSS (String SS)
  {
    //Variable declaration 
    boolean isDashesCorrect;
    char dashOne = SS.charAt(3);
    char dashTwo = SS.charAt(6);
    
    //Checks if the dashes are in the right place
    if (dashOne == '-' && dashTwo == '-')
      isDashesCorrect = true;
    else 
      isDashesCorrect = false;
    
    if (isDashesCorrect == false)
      return false;
    //checks to see if the ssn is made up of integers as its supposed to be
    else
    {
      String splitSS[] = SS.split ("-");
      String first = splitSS[0];
      String second = splitSS[1];
      String third = splitSS[2];
      if (isNumber(first) && isNumber(second) && isNumber(third))
        return true;
      else 
        return false;
      
    }
    
    
    
  }
  
  public static void main (String ... args)
  {
    //var declaration
    Scanner userSS = new Scanner(System.in);
    
    String SS;
    int userSSLength;
    //Check values and error messages
    boolean checkVal;
    String errorMessage = "Please enter a valid SSN";
    String approvalMessage = "This SSN is valid!";
    
    //main loop for user entry
   for (boolean loopCont = true; loopCont != false;) 
   {
     System.out.print ("Enter SSN: ");
     SS = userSS.nextLine();
     userSSLength = SS.length();
     
     
     //Checks if the user would like to continue or not
     if (SS.equals("quit") || SS.equals("end") || SS.equals("stop") ||SS.equals("exit") || SS.equals ("leave") )
     {
       System.out.println("Exiting");
       break;
     }
     //Checks the lenght of the string
     if (userSSLength != 11)
     {
       System.out.println (errorMessage);
       continue;
     }
     
       checkVal = checkSS(SS);
     //User validation or invalidation of the SSN
     if (checkVal == true)
     {
        System.out.println (approvalMessage);
        continue;
     }
     else
     {
       System.out.println (errorMessage);
       continue;
     } 
   }   
  }  
}

/*
[dakpinar@hills cs110a]$ java SocSec.java
Enter SSN: 654-98-7854
This SSN is valid!
Enter SSN: 98752369145
Please enter a valid SSN
Enter SSN: 12
Please enter a valid SSN
Enter SSN: quit
Exiting
*/





