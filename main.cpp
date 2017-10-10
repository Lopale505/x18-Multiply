#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
  cout << " X |" ;
    for ( int x = 1; x<=12; x++)
    {
      cout << " " << x << " |" ;
    }
    cout << endl;
  vector < vector <int> > table;
  table.resize(12);
  for(int row = 0; row < table.size(); row++)
  {
    table[row].resize(12);
    int mult = row + 1;
    cout << " " << mult << " |";
    for(int column = 0; column < table[row].size(); column++)
    {
      int mult2 = column +1;
      int total = mult * mult2;
      table[row][column]=total;
      cout << " " << table[row][column] << " |";
    }
    cout << endl;
  }




}
