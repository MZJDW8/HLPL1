#include "std_lib_facilities.h"

int decoder( int a)
{
    switch (a)
    {
        case 1: a=1;
            break;
        case 11: a=2;
            break;
        case 111: a=3;
            break;
        case 1111: a=4;
            break;
        case 11111: a=5;
            break;
        case 111111: a=6;
            break;
        case 1111111: a=7;
            break;
        case 11111111: a=8;
            break;
        case 111111111: a=9;
            break;
    }
    return a;
}

int main()
{
    int test , x , y , i , j ,encode;
    vector<int> number;
    cout<<"Please enter the numbers of test you want to try"<< endl;
    cin>> test;
    if (!cin || test <= 0)
		error("Test case must be a positive integer:");
    for(i=0;i<test;i++)
    {
        cout<<"Please enter the number of encryptions followed by the encryptions"<< endl;
        cin>> encode;
        if (!cin || encode<= 0)
		error("the number must be a positive integer:");
        for(j=0;j<encode;j++)
        {
            cin>> x ;
            if(x>1)
            cout<<"Should not input other then 1"<<endl;
            
            y= decoder(x);
            number.push_back(y);
            sort(number.begin() , number.end());
        }
        cout<<"These are the numbers after decoding:"<<endl;
        for(j=0;j<encode;j++)
        {
            if(number[j]==number[encode-1])
            cout<< number[j];

            else
            cout<< number[j] <<"-";
        }
        cout<<"\n";
        number.clear();
        
    }
}
