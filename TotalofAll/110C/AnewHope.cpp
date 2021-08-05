//Doga Akpinaroglu
// M. Luttrel
//Cs 110C Hw 7

#include <iostream>
#include <string>
#include <exception>
#include <cassert>


using namespace std;

class Stack 
{
  char arr[100];
  int size = 0;
  int index = -1;
  public:
  
  bool isEmpty ()
  {
    bool emptyArr = true;
    
   if (size > 0)
   {
      emptyArr = false; 
   }
    
    return emptyArr;
  }
  
  
  bool push (char var)
  {
    bool pushed = true;
    
    if (size == 100)
      pushed = false;
    else
    {
      index++;
      arr[index] = var;
      size++;
      
    }
    return pushed;
  }
  
  bool pop()
  {
    bool popped = true;
    if (isEmpty())
    {
      popped = false;
    }
    else 
    {
      arr[index] = '\0';
      index--;
      size--;
    }
    
    return popped;
  }
  char peek ()
  {
    if (isEmpty())
    {
      cout << "Stack empty, returning null" << endl;
      return '\0';
    }
    else 
    {
      return arr[index];
    }
  }};

class Queue 
{
  int MAX_QUEUE_PLUS_1 = 9;
  int MAX_QUEUE = 8;
  char arre [9];
  int front = 0;
  int back = 0;
  
  public:
  bool isEmpty ()
  {
    if (front == back)
      return true;
    else
      return false;
    
  }
  bool isFull ()
  {
    bool temper = ((back + 1) % 8) == front;
    //cout << temper << endl;
    if (temper)
      return true;
    else 
     return false;
  }
  bool enqueue (char charHoldr)
  { 
    if (isFull())
    {
      cout << "Queue is Full!" << endl;
      assert (!isFull());
      return false;
    }
    else
    {
     // cout << back << endl;
     // cout << front << endl;
      arre[back] = charHoldr;
      //cout << arre[back] << endl;
      //cout << arre[front] << endl;
      back = (back + 1) % 8;
      
      return true;
    }
  }
  bool dequeue ()
  {
    if (isEmpty())
    {
      cout << "Nothing to Dequeue!" << endl;
      return false;
    }
    else
    {
      front = (front + 1) % 8;
      return true;
    }
  }
  char peekFront ()
  {
    //cout << arr[front];
    return arre[front];
  }
};

bool isPalindrome (string palindrome)
{
  bool paliFound = true;
  bool temp;
  Stack paliHoldrStck;
  Queue paliHoldrQue;
  if (palindrome.length() % 2)
    for (int i = 0, j = palindrome.length() / 2; i < palindrome.length() / 2; i++, j++)
    {
      //cout << palindrome[j - 1] << endl;
      paliHoldrStck.push(palindrome[j + 1]);
      paliHoldrQue.enqueue(palindrome[i]);
    }
  else 
    for (int i = 0, j = palindrome.length() / 2; i < palindrome.length() / 2; i++, j++)
    {
      //cout << palindrome[j - 1] << endl;
      paliHoldrStck.push(palindrome[j]);
      paliHoldrQue.enqueue(palindrome[i]);
    }
  for (int i = 0; i < palindrome.length() / 2; i++)
  {
   // cout <<  paliHoldrStck.peek() << " " << paliHoldrQue.peekFront() << endl;;
    temp = paliHoldrStck.peek() == paliHoldrQue.peekFront();
    paliHoldrStck.pop();
    paliHoldrQue.dequeue();
    if (!temp)
    {
      return false;
    }
  }
  
  
  return paliFound;
}


int main ()
{
  
  string test = "racecar";
 if (isPalindrome(test))
   cout << test << " is a palindrome!" << endl;
  else 
    cout << test << " is not a palindrome!" << endl;
  
  string test1 = "abba";
 if (isPalindrome(test1))
   cout << test1 << " is a palindrome!" << endl;
  else 
    cout << test1 << " is not a palindrome!" << endl;
  
   string test3 = "Doga";
 if (isPalindrome(test3))
   cout << test3 << " is a palindrome!" << endl;
  else 
    cout << test3 << " is not a palindrome!" << endl;
  
   string test4 = "david";
 if (isPalindrome(test4))
   cout << test4 << " is a palindrome!" << endl;
  else 
    cout << test4 << " is not a palindrome!" << endl;
  
  string test2 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
 if (isPalindrome(test2))
   cout << test2 << " is a palindrome!" << endl;
  else 
    cout << test2 << " is not a palindrome!" << endl;
  
  
  
}



/*
[dakpinar@hills 110C]$ ./a.out
racecar is a palindrome!
abba is a palindrome!
Doga is not a palindrome!
david is not a palindrome!
Queue is Full!
a.out: AnewHope.cpp:109: bool Queue::enqueue(char): Assertion `!isFull()' failed.
Aborted (core dumped)
*/



