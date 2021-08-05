//Doga Akpinaroglu
//Cs 110C - M. Luttrell
//Hw10 Birthday
//Birthdays.cpp

#include <iostream>
#include <string>

using namespace std;

const int MAX_AMOUNT_OF_PEOPLE = 100;


class Person
{
  string name;
  string birthMonth;
  int birthDay;
  int birthYear;
  
  public:
  
  void add (string nameHolder, string monthHolder, int dayHolder, int yearHolder)
  {
    name = nameHolder;
    birthMonth = monthHolder;
    birthDay = dayHolder;
    birthYear = yearHolder;
  }
  
  void displayName ()
  {
    cout << name << endl;
    
  }
  
  void displayMonth ()
  {
    cout << birthMonth << endl;
    
  }
  
  void displayDay ()
  {
    cout << birthDay << endl;
    
  }
  
  void displayYear ()
  {
    cout << birthYear << endl;
    
  }
  string getName ()
  {
    return name;
    
  }
  
  string getMonth ()
  {
    return birthMonth;
    
  }
  
  int getDay ()
  {
    return birthDay;
    
  }
  
  int getYear ()
  {
    return birthYear;
    
  }
  void setName (string nameHolder)
  {
    name = nameHolder;
    
  }
  
  void setMonth (string monthHolder)
  {
    birthMonth = monthHolder;
    
  }
  
  void setDay (int dayHolder)
  {
    birthDay = dayHolder;
    
  }
  
  void setYear (int yearHolder)
  {
    birthYear = yearHolder;
  }
  
};

class Dictionary
{
  Person people[MAX_AMOUNT_OF_PEOPLE];
  int counter = 0;
  int size = 100;
  
  public:
  
  bool insert (string nameHolder, string monthHolder, int dayHolder, int yearHolder)
  {
    if (isEmpty())
    {
      people[0].add(nameHolder, monthHolder, dayHolder, yearHolder);
      counter++;
      return true;
    }
    else if (counter < size - 1)
    { 
      int i = counter;  
      while ((i > 0) && (nameHolder < people[i-1].getName()))
      {   
        people[i] = people[i-1];
        i = i - 1;
      }
      people[i].add(nameHolder, monthHolder, dayHolder, yearHolder);;
      /*int holder;
      for (int i = counter; ( i >= 0  && people[i].getName() > nameHolder); i--)
      {
        holder = i;
        people[i + 1] = people[i];
      }
      people[holder + 1].add(nameHolder, monthHolder, dayHolder, yearHolder);*/
      counter++;
      return true;
    }
    else
      return false;
  }
  
  bool removeEntry (string nameHolder)
  {
    int desiredIndex = binarySearchName(nameHolder);
    if (desiredIndex != -1)
    {
      for (int i = desiredIndex; i < counter; i++)
      {
        people[i] = people [i + 1];
      }
      counter--;
      return true;
    }
    else
      return false;
  }
  
  void display ()
  {
    for (int i = 0; i < counter; i++)
    {
      cout << "Birthday for " << people[i].getName() << " is " << people[i].getMonth() << ", " << people[i].getDay() << ", " << people[i].getYear() << endl;
    }
  }
  
  int binarySearchName (string holder)
  {
    int left, right, middle;
    left = 0;
    right = counter;
    middle = left + (right - left) / 2;
    
    while (left <= right)
    {
        middle = left + (right - left) / 2; 
  
         
        if (people[middle].getName() == holder ) 
            return middle; 
  
         
        if (people[middle].getName() < holder) 
            left = middle + 1; 
  
        
        else
            right = middle - 1;
    }
    
    return -1;
  }
  
  void displayByMonth (string monthHolder)
  {
    cout << "People who were born in " << monthHolder << " are: ";
    for (int i = 0; i < counter; i++)
    {
      if (people[i].getMonth() == monthHolder)
        cout << people[i].getName() << " "; 
    }
    cout << endl;
  }
  void displayBirthday (string nameHolder)
  {
    int position = binarySearchName (nameHolder);
    
    if (position == -1)
    {
      cout << nameHolder << " is not in the list!" << endl;
    }
    else 
    {
      cout << "Birthday of " << nameHolder << " is " << people[position].getMonth() << ", " << people[position].getDay() << ", " << people[position].getYear() << endl;;
    }
  }
  bool isEmpty ()
  {
    if (counter == 0)
      return true;
    return false;
  }
  
  int numItems ()
  {
    return counter;
  }
  
  
  void clear ()
  {
    counter = 0;
  }
  
  void insertionSort()
  {
    for (int i = 1; i < counter; i++)
    {
      Person nextItem = people[i];
      int index = i;
      while ((index > 0) && (people[index - 1].getMonth() < nextItem.getMonth()))
      {
        people[index] = people[index - 1];
        index--;
      }
      people[index] = nextItem;
    } 
  } 

  
};




int main ()
{
  Dictionary birthday;
  
  cout << "Inserting birthdays: James, Zula, Tango, Arata, Doga. Should be sorted so that list displays as: Arata, Doga, James, Tango, Zula" << endl;
  
  birthday.insert("James", "January", 24, 1998);
  birthday.insert("Zula", "May", 5, 1987);
  birthday.insert("Tango", "April", 15, 1965);
  birthday.insert("Arata", "January", 13, 1993);
  birthday.insert("Doga", "May", 29, 1997);
  
  cout << "Displaying the list" << endl;
  birthday.display();
  cout << "Displaying James' and Doga's Birthdays" << endl;
  birthday.displayBirthday("James");
  birthday.displayBirthday("Doga");
  
  cout << "Removing Tango" << endl;
  birthday.removeEntry("Tango");
  
  cout << "Displaying new list" << endl;
  birthday.display();
  cout << "Searching for Tango, shouldn't be found" << endl;
  birthday.displayBirthday("Tango");
  
  cout << "Displaying those who were born in January, should be Arata and James" << endl;
  birthday.displayByMonth("January");
  
}

/*
Inserting birthdays: James, Zula, Tango, Arata, Doga. Should be sorted so that list displays as: Arata, Doga, James, Tango, Zula
Displaying the list
Birthday for Arata is January, 13, 1993
Birthday for Doga is May, 29, 1997
Birthday for James is January, 24, 1998
Birthday for Tango is April, 15, 1965
Birthday for Zula is May, 5, 1987
Displaying James' and Doga's Birthdays
Birthday of James is January, 24, 1998
Birthday of Doga is May, 29, 1997
Removing Tango
Displaying new list
Birthday for Arata is January, 13, 1993
Birthday for Doga is May, 29, 1997
Birthday for James is January, 24, 1998
Birthday for Zula is May, 5, 1987
Searching for Tango, shouldn't be found
Tango is not in the list!
Displaying those who were born in January, should be Arata and James
People who were born in January are: Arata James
*/