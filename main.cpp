#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
    int a,b,c,d;
    float z,y;
    cout<< "enter value of a:";
    cin>>a;
    cout<< "\n enter value of b:";
    cin>>b;
    cout<< "\n enter value of c:";
    cin>>c;

    d= b*b-4*a*c;

    if(d<0)
    {
        cout<<"this quadratic equation has no real roots!\n";
        exit(0);
    }

    z=(-b-sqrt(d))/2/a;
    y=(-b+sqrt(d))/2/a;

    cout<<"the root of the equation x are following "<< z << " and "<< y;

    return 0;
}
