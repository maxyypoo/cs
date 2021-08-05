// Array-based List Class for Playlists
// Max Luttrell CS 110C
//
// Doga Akpinaroglu
//
//


#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;


template<class ItemType>
class List
{
private:
    static const int CHUNK_SIZE = 2;
    ItemType *list;
    int numItems;
    int maxItems;
public:
    // default constructor and destructor
    List() { numItems = 0; maxItems = CHUNK_SIZE;
        list = new ItemType[CHUNK_SIZE]; }
    ~List() { delete [] list; }
    
    // list member functions
    bool isEmpty()  const { return numItems==0; }
    int getLength() const { return numItems; }
    
    //Make sure to create newlist, allocate memory to it (dynamically), delete old list, insert what was requested
    bool insert(int pos, const ItemType& item);
    bool remove(int pos);
    
    // clear the list
    // clear can simply set numItems to zero.  The array list may still contain
    // items already inserted into the list, but since numItems is zero, there
    // isn't any way to get at them using getEntry() or setEntry()
    void clear() { numItems = 0; }
    
    // return entry at postion pos
    // throw invalid_argument if pos<1 or pos>getLength()
    ItemType getEntry(int pos) const;
    
    // set entry at postion pos to item
    // throw invalid_argument if pos<1 or pos>getLength()
    void setEntry(int pos, const ItemType& item);
};

template <class ItemType>
void List<ItemType>::setEntry (int pos, const ItemType& item)
{
  if (pos < 1 || pos > numItems)
    throw invalid_argument ("No such position exists!");
  else
    list[pos - 1] = item; 
}



template<class ItemType>
bool List<ItemType>::insert(int pos, const ItemType& item)
{
    bool canAdd;
    
    canAdd = ((pos > 0) && (pos <= numItems + 1) );
    if (canAdd)
    {
        // first, we have to move everything after our insertion point over one
        // position to make room for our new item.  start at the back of the list.
        // don't forget arrays start at postion zero and our list ADT starts at
        // position 1.
      if (numItems >= maxItems)
       {
        ItemType *listNew;
        listNew = new ItemType[numItems + 1];
        for (int i = 0; i < numItems; i++)
          listNew[i] = list[i];
       // cout << '1';
        delete [] list;
        list = new ItemType[numItems + 1];
        for (int i = 0; i < numItems; i++)
          list[i] = listNew[i];
        delete [] listNew;
        }
        for(int i=numItems; i>=pos; i--)
            list[i] = list[i-1];
        
        // now put our item at position pos-1
        list[pos-1] = item;
        
        numItems++;
    }
    
    return canAdd;
}

 
    


template<class ItemType>
ItemType List<ItemType>::getEntry(int pos) const
{
    if(pos<1 || pos>getLength()) {
        throw invalid_argument("ERROR: getEntry() using invalid position");
    }
    return list[pos-1];
}

// TODO: add implementations for setEntry() and remove() functions

template<class ItemType>
bool List<ItemType>::remove (int pos)
{
  bool ableToRemove = ((pos <= numItems) && (pos >= 1));
  if (ableToRemove)
  {
    for (int i = pos - 1; i < numItems; i++)
    {
      list[i] = list[i + 1];
      
    }
    numItems--;
  }
  return ableToRemove;
}


// Utility function to input a track number with some input checking
// to make sure it's a number
int getTrack()
{
    bool inputCheck;
    int trackNumber;
    
    do
    {
        inputCheck = true;
        cout << "Please enter the track number you'd like to view: ";
        if (!(cin >> trackNumber))
        {
            cout << "Please enter numbers only.\n";
            cin.clear();
            cin.ignore(10000,'\n');
            inputCheck = false;
        }
    } while (!inputCheck);
    return trackNumber;
}


int main()
{
    List<string> songs;
    char goAgain = 'y';
    int trackNumber;
    string trackName;
    cout << '1';
    // Insert some songs into our list
    songs.insert(1, "One More Saturday Night");
    songs.insert(1, "Friday I'm in Love");
    songs.insert(3, "Sunday Morning Coming Down");
    songs.insert(1, "California Love");
    
    cout << "Welcome!  There are " << songs.getLength() << " tracks.\n";
    while (goAgain!='n')
    {
        trackNumber = getTrack();
        try
        {
            trackName = songs.getEntry(trackNumber);
        }
        catch (invalid_argument arg)
        {
            cout << arg.what() << endl;
            trackName = "No Track";
        }
        cout << "Your track name is " << trackName << endl;
        cout << "Go again? (y/n) ";
        cin >> goAgain;
    }
    
    try
    {
      songs.setEntry (1, "Hard Bass");
    }
    catch (invalid_argument arg)
    {
      cout << arg.what() << endl;
    }
    
    try
    {
      songs.setEntry (-1, "Hard Bass");
    }
    catch (invalid_argument arg)
    {
      cout << arg.what() << endl;
    }
    
    try
    {
      songs.setEntry (5, "Hard Bass");
    }
    catch (invalid_argument arg)
    {
      cout << arg.what() << endl;
    }
  
    cout << "All songs in the play list, after adding \' Hard Bass\' into first slot." << endl;
    cout << songs.getEntry(1) << endl;
    cout << songs.getEntry(2) << endl;;
    cout << songs.getEntry(3) << endl;;
    cout << songs.getEntry(4) << endl;;
  
    songs.remove (2);
    songs.remove (1);
  
    cout << "All songs in the play list, after adding deleting first two slots." << endl;
    cout << songs.getEntry(1) << endl;;
    cout << songs.getEntry(2) << endl;;

    cout << "Rock on!\n";
    return 0;
}
/*
[dakpinar@hills 110C]$ ./a.out
1Welcome!  There are 4 tracks.
Please enter the track number you'd like to view: 1
Your track name is California Love
Go again? (y/n) y
Please enter the track number you'd like to view: 2
Your track name is Friday I'm in Love
Go again? (y/n) y
Please enter the track number you'd like to view: 3
Your track name is One More Saturday Night
Go again? (y/n) y
Please enter the track number you'd like to view: 4
Your track name is Sunday Morning Coming Down
Go again? (y/n) n
No such position exists!
No such position exists!
All songs in the play list, after adding ' Hard Bass' into first slot.
Hard Bass
Friday I'm in Love
One More Saturday Night
Sunday Morning Coming Down
All songs in the play list, after adding deleting first two slots.
One More Saturday Night
Sunday Morning Coming Down
Rock on!
[dakpinar@hills 110C]$ ^C

*/
