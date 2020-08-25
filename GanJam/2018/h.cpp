#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
  int i, j, test;
  int n;
  vector <int>pizza;
  int temp;
  int cost;
  int duplicate;

  cin >> test;

  for(i=0; i<test; i++)
  {
    cin >> n;
    for(j=0; j<n; j++)
    {
      cin >> temp;
      pizza.push_back(temp);
    }
    sort(pizza.rbegin(), pizza.rend());
    cost = 0;
    for(j=0; j<n; j++)
    {
      duplicate = 1;
      while(pizza[j] == pizza[j+duplicate])
      {
        if((duplicate+j)==n)
          break;
        duplicate++;
      }
      cost = (cost+(duplicate*pizza[j]));
      j += (duplicate*2 - 1);
    }
    cout << "Case " << (i+1) << ": " << cost << endl;
    pizza.clear();
  }
}
