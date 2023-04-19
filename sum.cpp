#include <iostream>
using namespace std;

int dif (int e,int f)// prototype and Declaration Function DIFFERENCE
{
int d;
d = e - f;
return d;
}


int main ()
{
    int m;
    m=dif(9,2);
    cout <<"The Difference between the two numbers is "<<m<<endl;
}