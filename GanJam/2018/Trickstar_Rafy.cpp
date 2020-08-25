#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
    int t, n, m;
    vector < int > v;
    double sol;
    int buiscuit;
    int i, j;
    int pb;

    cin >> t;
    for(i = 0 ; i < t ; ++i)
    {
        cin >> n >> m;
        for(j = 0 ; j < m ; ++j)
        {
            cin >> pb;
            v.push_back(pb);
        }
        buiscuit = 0;
        for(j=0; j<m; j++)
        {
          sol = (v[j]/9.81)*2*v[j];
          pb = ceil(sol);
          if((pb+buiscuit) > n)
          {
            sol = (v[j]/9.81)*v[j];
            pb = ceil(sol);
            if((pb+buiscuit) <= n)
            {
              buiscuit += pb;
            }
          }
          else
            buiscuit += pb;
          cout << pb << endl;
        }
        cout << "Case " << (i+1) << ": " << buiscuit << endl;
    }
}
