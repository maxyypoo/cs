//Name: Doga Akpinaroglu
//Hw: Hw#4 - Palindrome validator
//Class: CS111B - Java Programming
//Objective: Take in a word, which could be a plaindrome, from the user, and check if they are indeed a palindrome until the user decides to stop

import java.util.*;

class isPalindrome
{
  public static String ignoreSymbols(String ifPali)
  {
    String wordWithNoSymbols = "";
    for (int i = 0; i < ifPali.length(); i++)
    {
      if (Character.isLetter(ifPali.charAt(i)) || Character.isDigit(ifPali.charAt(i)))
        wordWithNoSymbols += ifPali.charAt(i);
    }
    return wordWithNoSymbols;
  }
    public static boolean paliValidate (String ifValidPali)
    {
      StringBuffer sb = new StringBuffer(ifValidPali);
      
      StringBuffer reversed = sb.reverse();
      String stringReversed = reversed.toString();
      
        
      return ifValidPali.equals(stringReversed);
  }
  
  public static void main (String ... args)
  {
    Scanner sc = new Scanner(System.in);
    String word;
    String newWord;
    
    for (boolean loopCont = true; loopCont != false;)
    {
      System.out.print ("Please enter a word: ");
      word = sc.nextLine();
      
     if (word.equals("quit") || word.equals("end") || word.equals("stop") ||word.equals("exit") || word.equals ("leave") )
     {
       System.out.println("Exiting");
       break;
     }
      
      newWord = ignoreSymbols(word);
      newWord = newWord.toLowerCase();

      if (paliValidate(newWord))
      {
        System.out.println(word + " is a palindrome!");
      }
      else
        System.out.println(word + " is not a palindrome!");
    }
  }
  
}
/*
Please enter a word: word
word is not a palindrome!
Please enter a word: abba
abba is a palindrome!
Please enter a word: Abba
Abba is a palindrome!
Please enter a word: a+bba
a+bba is a palindrome!
Please enter a word: a1b1a
a1b1a is a palindrome!
Please enter a word: a1bba
a1bba is not a palindrome!
Please enter a word: Al lets Della call Ed “Stella.”
Al lets Della call Ed “Stella.” is a palindrome!
Please enter a word: exit
Exiting
*/