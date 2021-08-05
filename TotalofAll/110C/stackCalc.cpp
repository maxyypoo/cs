//Doga Akpinaroglu
// M. Luttrel
//Cs 110C Hw 6

#include <iostream>
#include <string>
#include <exception>

const char LEFT = '(';
const char RIGHT = ')';


using namespace std;

class Stack 
{
  char arr[100];
  int size = 0;
  int index = -1;
  public:
  
  bool isEmpty ()
  {
    bool emptyArr = true;
    
   if (size > 0)
   {
      emptyArr = false; 
   }
    
    return emptyArr;
  }
  
  
  bool push (char var)
  {
    bool pushed = true;
    
    if (size == 100)
      pushed = false;
    else
    {
      index++;
      arr[index] = var;
      size++;
      
    }
    return pushed;
  }
  
  bool pop()
  {
    bool popped = true;
    if (isEmpty())
    {
      popped = false;
    }
    else 
    {
      arr[index] = '\0';
      index--;
      size--;
    }
    
    return popped;
  }
  char peek ()
  {
    if (isEmpty())
    {
      //cout << "Nothing on stack, error" << endl;
       throw runtime_error ("Nothing on stack, error");;
    }
    else 
    {
      return arr[index];
    }
  }};
  
  int calculate (string infix) 
  {
    string output;
    Stack stck;
    int result;
    int operand1;
    int operand2;
    
    for (int i = 0; i < infix.length(); i++)
    {
      if (infix[i] >= '0' && infix[i] <= '9')
      {
        output += infix[i];
      }
      else if (infix[i] == '(')
      {
        stck.push (infix[i]);
      }
      else if (infix[i] == '*' || infix[i] == '+' || infix[i] == '-' || infix[i] == '/')
      {
        if (stck.isEmpty())
          stck.push(infix[i]);
        else
        {
          //cout << "entered" << endl;
          bool hPrecedence = true;
          while (!(stck.isEmpty()) && hPrecedence == true)
          {
            if ((infix[i] == '+' || infix[i] == '-') && ( stck.peek() == '('))
            {
             // cout << "first" << endl;
              hPrecedence = false;
            }
            else if ((infix[i] == '*' || infix[i] == '/') && (stck.peek() == '+' || stck.peek() == '-' || stck.peek() == '('))
            {
              //cout << "second" << endl;
              hPrecedence = false;
              
            }
            else 
            {
              //cout << "third" << endl;
              //output.append(stck.peek());
              output += stck.peek();
              stck.pop();
            }
          }
          stck.push(infix[i]);
        }
        
      }
      else if (infix[i] == ')')
      {
        int j = 0;
        while (stck.peek() != '('){
         // output.append(stck.peek())
          output += stck.peek();
          stck.pop();
          }
        stck.pop();
          
      }
      if (infix[i + 1] == '\0')
      {
        while (!stck.isEmpty())
        {
          //output.append(stck.peek());
          output += stck.peek();
          stck.pop();
        }
      }
    }
    for (int i = 0; i < output.length(); i++)
    {
      if (output[i] >= '0' && output[i] <= '9')
        stck.push(output[i]);
      else // ch is an operator named op
      {
  
        operand2 = stck.peek() - '0';
        stck.pop();
        operand1 = stck.peek() - '0';
        stck.pop();
        
        
        if (output[i] == '+')
          result = operand1 + operand2;
        else if (output[i] == '-')
          result = operand1 - operand2;
        else if (output[i] == '*')
          result = operand1 * operand2;
        else
          result = operand1 / operand2;
        stck.push(result + '0');
  }
  }
    
    return result;
  }



bool isValidPara( string str1)
{
  Stack valCheck;
  for (int i = 0; i < str1.length() ; i++)
  {
    if (str1[i] == LEFT)
      valCheck.push (LEFT) ; 
    else if (str1[i] <= '9' && str1[i] >= '0');
    else if (str1[i] == '+' || str1[i] == '-' || str1[i] == '*' || str1[i] == '/');
    else
    {
      if (valCheck.isEmpty())
      {
        cout << "Invalid String." << endl;
        return 0;
      }
      if (valCheck.peek() != LEFT)
      {
        cout << "1Invalid String." << endl;
        return 0;
      }
      valCheck.pop();
    }
  }
  
  if (!(valCheck.isEmpty()))
    return 0;
  else
    return 1;
  
}



    bool checkValid (string str)
    {
      for (int i = 0; i < str.length(); i++)
      {
        if (!(str[i] <= '9' && str[i] >= '0') && !(str[i] == '(' || str[i] == ')') && !(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') )
          return 0;
        else if ((str[i] <= '9' && str[i] >= '0') && (str[i + 1] <= '9' && str[i + 1] >= '0') )
          return 0;
      }
      if (!(isValidPara(str)))
        return 0;
      if (str.length() < 3)
        return 0;
     // if ()
      return 1;
    }
    
    
    
  
  
  int main ()
  {
    bool invalid = false;
    int result;
   // string demoEq = "(( ( 2 + 3 ) ) - 1) / 2";
   // cout << calculate (demoEq) << endl;;
    
    string userEq;
    
    
    do{
      cout << "Please enter an inflix equation: "; 
      cin >> userEq;
      
      invalid = !checkValid(userEq);
      if (invalid)
        cout << "Invalid Equation, please re-enter!" << endl;
    }while (invalid);
    
      result = calculate (userEq);
    
   try 
   {
      result = calculate(userEq);
   }
    catch (runtime_error* Err)
    {
       cout << Err->what() << endl;
    }
    
    
    cout << "result of the calculation is: " << result << endl;
    
    
    
    return 0;
    
  }
  
  /*
  [dakpinar@hills 110C]$ ./a.out
Please enter an inflix equation: 1+1
result of the calculation is: 2
[dakpinar@hills 110C]$ ./a.out
Please enter an inflix equation: 1+2*3
result of the calculation is: 7
[dakpinar@hills 110C]$ ./a.out
Please enter an inflix equation: (1+2)*3
result of the calculation is: 9
[dakpinar@hills 110C]$ ./a.out
Please enter an inflix equation: 1+
Invalid Equation, please re-enter!
Please enter an inflix equation: ((
Invalid Equation, please re-enter!
Please enter an inflix equation: 1+2-1)
Invalid String.
Invalid Equation, please re-enter!
Please enter an inflix equation: 2/1
result of the calculation is: 2
*/
  
  
  
  
  
