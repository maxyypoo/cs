//Doga Akpinaroglu
//CS 110C
//HW 11 

#include <iostream>
#include <string>

const int inf = 10000;

using namespace std;

class Cities
{
  string cityName;
  public:
  
  void setName (string nameHold)
  {
    cityName = nameHold;
  }
  
  string getName ()
  {
    return cityName;
    
  }
};


class Graph
{
  Cities cityList[6];
  int matrix[6][6];
  
  public:
  
  Graph ()
  {
    cityList[0].setName("SFO");
    cityList[1].setName("LAX");
    cityList[2].setName("LAX");
    cityList[3].setName("PHX");
    cityList[4].setName("DEN");
    cityList[5].setName("JFK");
    
    
    matrix[0][0] = 0;
    matrix[0][1] = 120;
    matrix[0][2] = 150;
    matrix[0][3] = inf;
    matrix[0][4] = inf;
    matrix[0][5] = 500;
    matrix[1][0] = 120;
    matrix[1][1] = 0;
    matrix[1][2] = inf;
    matrix[1][3] = 75;
    matrix[1][4] = inf;
    matrix[1][5] = 350;
    matrix[2][0] = 150;
    matrix[2][0] = inf;
    matrix[2][1] = inf;
    matrix[2][2] = 0;
    matrix[2][3] = inf;
    matrix[2][4] = 250;
    matrix[2][5] = inf;
    matrix[3][0] = inf;
    matrix[3][1] = 75;
    matrix[3][2] = inf;
    matrix[3][3] = 0;
    matrix[3][4] = 150;
    matrix[3][5] = inf;
    matrix[4][0] = inf;
    matrix[4][1] = inf;
    matrix[4][2] = 250;
    matrix[4][3] = 150;
    matrix[4][4] = 0;
    matrix[4][5] = inf;
    matrix[5][0] = 500;
    matrix[5][1] = 350;
    matrix[5][2] = inf;
    matrix[5][3] = inf;
    matrix[5][4] = inf;
    matrix[5][5] = 0; 
    
    reCalculate();
  }
  
  void reCalculate ()
  {
    int weight[6];
    int vertexHold;
    int vertexSet[6];
    int numHold;
    
   // cout << "test" << endl;
    
    for (int v = 0; v < 6; v++)
      weight[v] = matrix[0][v];
  //  cout << "test1" << endl;
    vertexSet[0] = 0;
    numHold = weight[1];
    vertexHold = 1;
    for (int i = 1; i < 6; i++)
    {
     // cout << "test2" << endl;
      for (int j = 1; j < 6; j++)
      {
       // cout << "test3" << endl;
        if((numHold > weight[j]) && (j != vertexSet[j]) && (weight[j] != 0))
        {
          //cout << "test4" << endl;
          numHold = weight[j];
          vertexHold = j;
        }
      }
      //cout << "vertexHold";
      vertexSet[vertexHold] = vertexHold;
      //cout << "test5" << endl;
      for (int k = 0; k < 6; k++)
      {
        if (weight[k] > (weight[vertexHold] + matrix[vertexHold][k]))
        {
          weight[k] = (weight[vertexHold] + matrix[vertexHold][k]);
        }
      }
    }
  }
  
  void print ()
  {
    cout << cityList[0].getName() << " to " << cityList[0].getName() << " is $" << matrix[0][0] << endl;
    cout << cityList[0].getName() << " to " << cityList[1].getName() << " is $" << matrix[0][1] << endl;
    cout << cityList[0].getName() << " to " << cityList[2].getName() << " is $" << matrix[0][2] << endl;
    cout << cityList[0].getName() << " to " << cityList[3].getName() << " is $" << matrix[0][3] << endl;
    cout << cityList[0].getName() << " to " << cityList[4].getName() << " is $" << matrix[0][4] << endl;
    cout << cityList[0].getName() << " to " << cityList[5].getName() << " is $" << matrix[0][5] << endl;
  }
  
};


int main ()
{
  Graph airwayGraph;
  
  airwayGraph.print();
  
  return 0;
  
}
/*
[dakpinar@hills TotalofAll]$ ./a.out
SFO to SFO is $0
SFO to LAX is $120
SFO to LAX is $150
SFO to PHX is $10000
SFO to DEN is $10000
SFO to JFK is $500
*/





