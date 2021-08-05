// This program uses the bubble sort algorithm to sort an
 // array in ascending order.
  #include <iostream>
  using namespace std;
 
 // Function prototypes
  void sortArray(int [], int, int, int);
  void showArray(const int [], int); 


  int main()
  {
    int startIndex, endIndex;
    
    //debug
    /*int* arr;
    
    //cout << "Please enter the amount of values you'd like to write: "
    //cin >> size
    
    arr = new int [size]; 
    
  // Array of unsorted values for debug
  //int values[6] = {7, 3, 2, 6, 5, 1};
    
    
   startIndex = 2;
   endIndex = 5;
  //  endIndex--; */
 
    int arr1[] = { 10, 9 , 8 , 7, 6, 5 , 4, 3 , 2 , 1} ;
    int arr2[] = { 10, 9 , 8 , 7, 6, 5 , 4, 3 , 2 , 1} ;
    int arr3[] = { 10, 9 , 8 , 7, 6, 5 , 4, 3 , 2 , 1} ;
    int arr4[] = { 10, 9 , 8 , 7, 6, 5 , 4, 3 , 2 , 1} ;

    sortArray( arr1, 10 , 1, 2 ) ;
    showArray( arr1, 10 ) ;

    sortArray( arr2, 10 , 0, 9 ) ;
    showArray( arr2, 10 ) ;

    sortArray( arr3, 10 , 7, 9 ) ;
    showArray( arr3, 10 ) ;

    sortArray( arr4, 10 , 2, 5 ) ;
    showArray( arr4, 10 ) ;
    
    //debug
    /*
       Display the values.
       cout << "The unsorted values are: \n";
       showArray(values, 6);

      Sort the values.
      sortArray(values, 6, startIndex, endIndex);

      Display them again.
      cout << "The sorted values are:\n";
      showArray(values, 6);

      delete[] size; 
    */
    
    return 0;
  }
 
  

  void sortArray(int array[], int size, int startIndex, int endIndex)
  {
    bool swap;
    int temp;

    do
    {
      swap = false;
      for (int count = startIndex; count < (endIndex ); count++)
      {
        if (array[count] > array[count + 1])
        {
          temp = array[count];
          array[count] = array[count + 1];
          array[count + 1] = temp;
          swap = true;
        }
    }
      endIndex--;
    } while (swap);
  }
 
  //*************************************************************
  // Definition of function showArray. *
  // This function displays the contents of array. size is the *
  // number of elements. *
  //*************************************************************
 
 void showArray(const int array[], int size)
  {
    for (int count = 0; count < size; count++)
      cout << array[count] << " ";
    cout << endl;
  }