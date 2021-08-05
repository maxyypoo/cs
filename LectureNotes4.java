char x[] = "Abbas".toCharArray();

check if the string starts or ends with something, returns bool;

str.startsWith();
str.endsWith();

String s = "Call".replace('c','k');
check if a string contains a certain word or char, return bool;

str.contain("breh");

str.replaceFirst();



string str = "breh:lmao:chill:dawg";
string ar[] = str.split (":");

str.replaceAll(" ", "__");


joins strings with a delimiter inbetween, first string is the delimiter;
string x = String.join("@", "John","Jonny boi", "Nah Breh");


... is varied number of args, saves the arguments into an array with same name of the parameter;
public static int add(int ... nums);
