//Doga Akpinaroglu
// M. Luttrel
//Cs 110C Hw 6

#include <iostream>
#include <string>
#include <exception>



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
  const int MAX_QUEUE_PLUS_1 = 9;
  const int MAX_QUEUE = MAX_QUEUE_PLUS_1 - 1;
  char arr[MAX_QUEUE_PLUS_1];
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
    if (front == (back + 1) % MAX_QUEUE_PLUS_1)
      return true;
    else 
      false;
  }
  bool enqueue (char charHoldr)
  {
    if (isFull)
    {
      cout << "Queue is Full!" << endl;
      return false;
    }
    else
    {
      arr[back] = charHoldr;
      back = (back + 1) % MAX_QUEUE;
      return true;
    }
  }
  bool dequeue ()
  {
    if (isEmpty)
    {
      cout << "Nothing to Dequeue!" << endl;
      return false;
    }
    else
    {
      front = (front + 1) % MAX_QUEUE;
      return true;
    }
  }
  char peekFront ()
  {
    return arr[front];
  }
}

bool isPalindrome (string palindrome)
{
  bool paliFound = true;
  bool temp;
  Stack paliHoldrStck;
  Queue paliHoldrQue;
  
  for (int i = 0, int j = palindrome.lenght(); i < palindrome.lenght() / 2, j > palindrome.lenght() / 2; i++, j--)
  {
    paliHoldrStck.push(palindrome[i]);
    paliHoldrQue.enqueue(palindrome[j]);
  }
  for (int i = 0; i < palindrome.lenght(); i++)
  {
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
 if (isPalindrome(tolower(test)))
   cout << test << " is a palindrome!" << endl;
  else 
    cout << test " is not a palindrome!" << endl;
}







