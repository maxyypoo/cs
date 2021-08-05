final;
look up what it does;

class A
{
  public A()
  {
    println("in A");
  }
}

class B extends A
{
  public B()
  {
  println("in B");
  }

}

if you make a B object, it calls to A first then b;
extends makes it so that you call the base class first;


to make classes be static make constructors private;that way you cant make objects of the class and can only access methods of the class;

File class; check it out;

File f1 = new File ("/usr/myfile"); parameter is a path;
File f2 = new File ("/usr", "myfile");
File f3 = new File ("/usr");
File f4 = new File (f3, "myfile"); all looks like hte same thing;


//Methods and their return types
String getName(); myfile;
String getParent(); /usr;
String getAbsolutePath(); /usr/myfile;
boolean canRead();
boolean canWrite();
boolean canExecute();
boolean exists();
boolean isDirectory();
boolean isFile();
long length();
boolean delete();
boolean deleteOnExit();
String[] list();
boolean mkdir();
boolean renameTo(File newFile);
boolean setReadOnly();