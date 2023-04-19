#include <iostream>
using namespace std;
int sum (int a,int b)// prototype and Declaration Function SUM
{
int r;
r=a+b;
return r;
}

int main ()
{
    int c;
    c= sum (5,3);
    cout <<" The SUM is "<<c<<endl;
    return 0;
}