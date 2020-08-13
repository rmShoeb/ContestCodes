#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main(void)
{
    int sides[3];
    int i;
    bool flag_1 = false;
    bool flag_2 = false;

    for(i=0; i<3; i++)
        cin >> sides[i];

    sort(sides, sides+3);

    if(sides[0] == sides[1])
        flag_1 = true;
    if(sides[1] == sides[2])
        flag_2 = true;

    if(flag_1 && flag_2)
        cout << "Equilateral Triangle";
    else if(flag_1 || flag_2)
        cout << "Isosceles Triangle";
    else
        cout << "Bad Triangle";
    cout << endl;
}
