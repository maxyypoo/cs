afile;
////////////
File f = new File ("afile");
if (!f.isFile()) die ("It is not a file.");
if (!f.couldRead()) die ("can't read the file");
if (f.isEmpty()) die ("The file is empty");

method;
////////////
public static File readable (String fname);
{
  File f = new File(fname);
  if (!f.isFile()) die ("It is not a file.");
  if (!f.couldRead()) die ("can't read the file");
  if (f.isEmpty()) die ("The file is empty");

  return (f);
  
}


//////////
import java.io*;

class MyCat
{
  public static void main (String ... args) throws
  {
    if (args.lenght == 0) die ("Invalid command");
    String fname = args[0];
    Scanner sc = new Scanner(readable(fname));
    while (sc.hasNextLine()) println(sc.nextLin());
  }
}

use javap java.io.InputStream;
and stuff likke that to probe in to the methods of a class;

///////////////////////////////



import java.io.*;

class MyCp
{
  public static void main (String ... args)
  {
    if (args.lenght != 2) 
      die ("usage: " + programName() + "file1 file2");
    String inFile = args[0];
    String outFile = args[1];
    FileInputStream fis;
    FileOutputStream fos;
    int c;
    
    try
    {
      fis = new FileInputStream (inFile);
      fos = new FileOutputStream (outFile);
      
      while((c = fis.read()) != -1)
      {
        fos.write(c);
      }
      fis.close;
      fos.close;
    }
    catch (IO Esception e)
    {}
  }
  
}



### HW ###
java MyWC MyWC.java;
read the file, split by space, write in the array and do array.lenght();
lenght gives you the chars in an array;


try (FileInputStream fis = new FileInputStream(inFile); FileOutputStream fos = new FileOutputStream (outFile))
{
  do whatever to the file;
  -
  -
  -
}
catch (IoException e){}



public static String programName ()
{
  return (System.getProperty("sun.java.command"));
}















