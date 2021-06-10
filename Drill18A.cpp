#include "std_lib_facilities.h"

//1
int ga[10] = {1,2,4,8,16,32,64,128,256,512};

//2
void f(int a[] , int n)
{
    int i;
    //3.a
    int la[10];
    //3.b
    for(i=0;i<10;i++)
    {
        la[i] =a[i];
    }
    //3.c
    for(i=0;i<10;i++)
    {
        cout << la[i] << " ";
    }
    cout<< "\n";
    //3.d
    int *p = new int[n];
    //3.e
    for (i=0;i<n;i++)
    {
      p[i] = la[i];  
    }
    //3.f
    for (i=0;i<n;i++)
    {
      cout<< p[i]<< " ";  
    }
    cout<< "\n";
    //3.g
    delete[] p;
}
//4.b
int factorial(int a)
{
    int i=1, f=1;
    for(i; i<=a; i++)
    {
        f = f * i;
    }
    return f;
}
//4.b2
int main()
{
    //4.a
    f(ga , 10);
    //4.b1
    int aa[10];
    for(int i=0;i<10;i++)
    {
        aa[i]= factorial(i+1);
    }
    //4.c
    f(aa , 10);
}
