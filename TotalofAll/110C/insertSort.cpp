#include <iostream>
#include <array>


using namespace std;


void print (int array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << array[i] << ", ";
  }
  cout << endl;
}

void insertionSort(int theArray[], int n)
{
  int counter = 0;
// unsorted = first index of the unsorted region,
// loc = index of insertion in the sorted region,
// nextItem = next item in the unsorted region.
//
// Initially, sorted region is theArray[0],
// unsorted region is theArray[1..n-1].
// In general, sorted region is theArray[0..unsorted-1],
// unsorted region theArray[unsorted..n-1]
for (int unsorted = 1; unsorted < n; unsorted++)
{
  
  
  counter++;
// At this point, theArray[0..unsorted-1] is sorted.
// Find the right position (loc) in theArray[0..unsorted]
// for theArray[unsorted], which is the first entry in the
// unsorted region; shift, as necessary, to make room
int nextItem = theArray[unsorted];
int loc = unsorted;
  counter++;
while ((loc > 0) && (theArray[loc - 1] < nextItem))
{
  counter++;
  counter++;
// Shift theArray[loc - 1] to the right
theArray[loc] = theArray[loc - 1];
loc--;
} // end while
// At this point, theArray[loc] is where nextItem belongs

  counter++;
  theArray[loc] = nextItem;// Insert nextItem into sorted region
} // end for
  cout << counter << endl;
} // end insertionSort


int main ()
{
  int arr[] = {1,2,5,99,7,5,0,15};
  int arr2[] = {684,	448,	953,	413,	409,
412,	267,	383,	880,	429};
  int arr3 [] = {32131,456,9,0,12,5,78,4,1};
  int arr4 [] = {8,7,6,5,4,3,2,1};
  
  
  cout << "unsorted array" << endl;
  print (arr, 8);
  
  
  insertionSort(arr, 8);
  cout << "sorted array" << endl;
  
  print (arr, 8);
    
  print (arr2, 10 );
  insertionSort (arr2, 10);
  print (arr2, 10);
  
  print (arr3, 9);
  insertionSort(arr3, 9);
  print(arr3, 9);
  
  print (arr4, 8);
  insertionSort (arr4, 8);
  print (arr4, 8);
  
  
  return 0;
}