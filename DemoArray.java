//Programmer: Doga Akpinaroglu
//HW: HW2 - Random Array
//Course: CS 111B - Java Programming
//Objective: To initialize an array of size 100 with random numbers between 1-500, and to find the highest, lowest numbers and the average of this array; and sorting the array.



import java.util.*;
class DemoArray
{
  private static int rand(int a, int b)
  {
    return((int)((b-a+1)*Math.random() + a));
  }
  
  static public void main (String ... args)
  {
    int randArray[] = new int [100];
    int counter = 0;
    int lowest;
    int highest;
    int total = 0;
    double avg;

    //Randomly initializing the array; Range (1.500), Size(100);
    for (int i = 0; i < 100; i++)
    {
      randArray[i] = rand(1,500);
    }

    //Displaying the array in a 10 x 10 Matrix
    System.out.println ("The Random Array is:");
    for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        System.out.print (randArray[counter]);
        counter++;
        System.out.print(" ");
      }
      System.out.println("");
    }

    lowest = randArray[0];
    highest = randArray[0];
    System.out.println("");

    //Finding the lowest and the highest numbers in the array
    for (int i = 1; i < 100; i++)
    {
      if (lowest > randArray[i])
        lowest = randArray[i];
    }
    System.out.println("Lowest number in the array is: " + lowest);

    for (int i = 1; i < 100; i++)
    {
      if (highest < randArray[i])
        highest = randArray[i];
    }
     System.out.println("Highest number in the array is: " + highest);

    //Finding the Average of the array
    for (int i = 0; i < 100; i++)
    {
      total += randArray[i];
    }

    avg = total/100;
    

    System.out.println("Average of the array is: " + avg);
    System.out.println("");

    //Sorting and displaying the sorted Array
    Arrays.sort(randArray);
    
    System.out.println("Here is how the sorted array looks like:");
    counter = 0;
    
     for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        System.out.print (randArray[counter]);
        counter++;
        System.out.print(" ");
      }
      System.out.println("");
    }
  
  }
}


/*




The Random Array is:
478 73 229 17 107 486 436 319 158 465
334 55 330 129 73 241 318 183 386 236
370 256 396 341 169 147 265 387 438 168
431 342 61 191 305 174 472 141 227 397
155 17 284 342 177 73 187 280 442 14
356 71 89 43 93 461 370 208 363 145
239 383 74 57 464 259 39 222 106 477
347 293 451 18 291 156 192 110 234 189
18 293 346 409 162 354 41 375 473 115
168 254 116 53 29 3 184 382 205 59

Lowest number in the array is: 3
Highest number in the array is: 486
Average of the array is: 235.0

Here is how the sorted array looks like:
3 14 17 17 18 18 29 39 41 43
53 55 57 59 61 71 73 73 73 74
89 93 106 107 110 115 116 129 141 145
147 155 156 158 162 168 168 169 174 177
183 184 187 189 191 192 205 208 222 227
229 234 236 239 241 254 256 259 265 280
284 291 293 293 305 318 319 330 334 341
342 342 346 347 354 356 363 370 370 375
382 383 386 387 396 397 409 431 436 438
442 451 461 464 465 472 473 477 478 486


*/