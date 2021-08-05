Hw palindrome, ignore all characters but alphabet and digits, ignore spaces symbols upper lower;


take a string as an input, determine if its a palindrome;
output the original string and validate or invalidate;


take the string and save it into 2 different strings;
manupilate one of them to make all chars into tolower;
ignore all symbols and spaces; 
use a for loop with i values going thorugh all symbols and removing them; 
for (int i = somenumber; i < someothernumber; i++)
  pali.ignore(char(i));//sometihng like this;

divide the string in half, if its odd ignore midplace;
use pali.equals(paliOtherhalf);
reverse the string and if its the same with the normal version, its the same;

use stringbuffer, it has reverse method unlike string;


print out validation or else;


public static String (String str)
{
  remove al the good shit;
  convert all to upper;
}

prolly make a stringbuffer object and save the final product into it and reverse it and stuff;

stringbuffer str1 = str;

str1.equals(reverse(str1)); or its like str1.reverse();
something like this;

Character class methods;

isUpper();
isLower();
isAlpha();

str.charAt(int index);






StringBuffer stuff;


StringBuffer sb = new StringBuffer();
StringBuffer sb = new StringBuffer(int number of spaces to allacote for string, eg 90);
StringBuffer sb = new StringBuffer(String some string, works like copy constructor, and adds 16 bits of space to play with);

StringBuffer increases its size as you add more chars to it;



sb.lenght(); gives string lenght;
sb.capacity(); gives StringBuffer capacity;



you can use the same method you use in String class in StringBuffer;
but not vice versa;

sb.reverse();



public static String (String str)
{
  
  StringBuffer sb = new StringBuffer(str);
  return (toString(sb.reverse()));
}






