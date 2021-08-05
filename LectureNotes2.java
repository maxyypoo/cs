/*String ar[] = {"Desolace", "Dustmallow - Theramore", "Badlands", "Swamp of Sorrows"};
println ("number or zones, including desolace is: " + ar.lenght);



for (int i = 0; i < ar.lenght; i++)
{
if (name.equals(ar[i]))
{
  print("sick");
  System.exit(0);
}
}

if(name.equalsIgnoreCase(ar[i])) // for case indifferent search
{;}




When trees speak luktar in stVietnam

 \;-;/
 /;;;\
 
 fill out an int array with 100 numbers R = 1-500;
list the array in 10 x 10 grid

find smallest, largest and the average of the array
sort the array and print

Arrays.sort(ages,Collections.reverseOrder());

name it demo Array or something

private static int rand(int a, int b)
   {
      return((int)((b-a+1)*Math.random() + a));
   }

*/



class Roll
{
  
  private static int rand(int a, int b)
  {
      return((int)((b-a+1)*Math.random() + a));
  }
  
  
  public static void main (String ... args)
  {
    int count = 0;
    
    int  num;
    
    for (int i =0; i < 100; i ++)
    {
      num = rand(1,6);
      if (num == 6)
        count++;
    }
    
    System.out.println("Number of 6:" + count);
  }
  
  
  
}






















































