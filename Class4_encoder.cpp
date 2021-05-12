#include "std_lib_facilities.h"

int encoder(int a)
{
    switch (a)
    {
    case 1: a=1;
        break;
    case 2: a=11;
        break;
    case 3: a=111;
        break;
    case 4: a=1111;
        break;
    case 5: a=11111;
        break;
    case 6: a=111111;
        break;
    case 7: a=1111111;
        break;
    case 8: a=11111111;
        break;
    case 9: a=111111111;
        break;
    }
    return a;
}
int main()
{
    int test , i , j , x , y , decode;
    vector<int>number;
    cout<<"please enter the number of test you want to do!"<<endl;
    cin >> test;
    if (!cin || test <= 0)
		error("Test case must be a positive integer:");
    for(i=0;i<test;i++)
    {
        cout<<"Please enter how many numbers you want to encode , give with the nubers"<<endl;
        cin >> decode;
        if (!cin || decode<= 0)
		error("the number must be a positive integer:");
        for(j=0;j<decode;j++)
        {
            cin >> x;
            if(x>9)
            cout<< "Can not process value bigger then 9!"<<endl;
            y = encoder(x);
            number.push_back(y);
            sort(number.begin() , number.end());
        }
        cout<<"These are the numbers after encoding:"<<endl;
        for(j=0;j<decode;j++)
        {
            if(number[j]==number[decode-1])
            cout<< number[j];

            else
            cout<< number[j] <<"-";
        }
        cout<<"\n";
        number.clear();
    }
}