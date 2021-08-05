#include <iostream>
#include <stdexcept>

using namespace std;

template<class ItemType>
class Box
{
  private:
  ItemType item;
  public:
  void setItem(const ItemType& i)
  { item = i; }
  ItemType getItem() const
{ return item; }
};

Box<int> findBox(Box<int> boxes[], int size, int target)
{
  int i = 0;
  bool found = false;
  while (!found && (i<size))
  {
    if (boxes[i].getItem() > 0)
      throw logic_error ("Negative number found, SSN number can only be positive");
    else if (target==boxes[i].getItem())
      found = true;
    else
      i++;
  }
  if (!found)
    throw logic_error ("Target not found in any box!");
  return boxes[i];
}




int main()
{
  Box<int> ssn;
  Box<int> boxes[4];
  
  boxes[0].setItem(5);
  boxes[1].setItem(330);
  boxes[2].setItem(-2);
  boxes[3].setItem(332);
  try
  {
    ssn = findBox (boxes, 4, 332);
  }
  catch (logic_error Logerr)
  {
    cout << Logerr.what() << endl;
    ssn.setItem(0);
  }
  
  throw 2;
  
  cout << ssn.getItem() << endl;
   
  return 0;
}