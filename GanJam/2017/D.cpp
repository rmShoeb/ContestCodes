#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int fact(int n)
{
    if(n>1)
        return n*fact(n-1);
    else
        return 1;
}

int main(void)
{

}
