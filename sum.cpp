#include <iostream>
using namespace std;
int sum (int a,int b)// prototype and Declaration Function SUM
{
int r;
r=a+b;
return r;
}

int dif (int e,int f)// prototype and Declaration Function DIFFERENCE
{
int d;
d = e - f;
return d;
}

int multi (int g,int h)// prototype and Declaration Function MULTIPLIER
{
int m;
 m = g * h;
return m;
}


int main ()
{
    int c,m,mu;
    c= sum (5,3);
    cout <<"The SUM is "<<c<<endl;
    m=dif(9,2);
    cout <<"The Subtraction between the two numbers is "<<m<<endl;
    mu=multi(2,3);
    cout <<"The multiplication between the two numbers is "<<mu<<endl;
    return 0;
}   
//Verifica commando PUSH
//Verifica commando PULL
