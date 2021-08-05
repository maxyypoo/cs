#include <iostream>
using namespace std;
const int MAX_QUEUE = 3;

class Queue
{
  int front;
  int back;
  int counter;
  char entries[MAX_QUEUE];
  
  public:
    Queue(){front = 0;back = MAX_QUEUE - 1; counter = 0;};
  
    bool enque(char newEntry)
    {
      if (counter == MAX_QUEUE)
        return false;
      else{
        back = (back + 1) % MAX_QUEUE;
        entries[back] = newEntry;
        counter++;
      
        return true;
      }
    }
  
    bool dequeue ()
    {
      if (isEmpty())
      {
        return false;
      }
      else
      {
        front = (front + 1) % MAX_QUEUE;
        counter--;
        return 0;
      }
    }
  char peek ()
  {
    return entries[0];
  }
  
  bool isEmpty ()
  {
    return counter == 0;
  }
};





int main ()
{
  Queue aQueue;
  
  aQueue.enque('1');
  aQueue.enque('2');
  cout << aQueue.peek() << endl;;
  aQueue.enque('3');
  if (!aQueue.enque('4'))
    cout << "Queue Full!!" << endl;
  aQueue.dequeue();
  aQueue.dequeue();
  aQueue.dequeue();
  aQueue.dequeue();
  
  return 0;
  
  
  
}