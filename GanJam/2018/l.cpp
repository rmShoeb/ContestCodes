#include <iostream>
using namespace std;

int main(void)
{
  int t, x, y;
  int night;

  cin >> t;
  while(t--)
  {
    cin >> x >> y;
    if(x <= y)
    {
      if(x>99)
        night = 1;
      else
        night = -1;
    }
    else
    {
      night = (100-x)/(x-y);
      if((x-y)*night < (100-x))
        night++;
      night++;
    }
    cout << night << endl;
  }
}
