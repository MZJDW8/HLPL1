#include "std_lib_facilities.h"

//4
void print_array10(ostream& os, int* a)
{
    for(int i=0;i<10;i++) 
    {
        os << i << " = " << a[i] << "." << endl;
    }
    cout << endl;
}
//7
void print_array(ostream& os, int* a, int n)
{
    for(int i=0;i<n;i++) 
    {
        os << i << " = " << a[i] << "." << endl;
    }
    cout << endl;
}

void print_vector(ostream& os, vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        os << i << " - ";
    }
    cout << endl;
}

int main()
{
    //1
    int *arr = new int[10];
    //2
    for (int i=0;i<10;i++) 
    {
        arr[i] = i + 1;
    }
    //3
    delete[] arr; //9

    //5
    int *arr1 = new int[10];
    for(int i=0;i<10;i++)
    {
        arr1[i] = i + 100;
    }
    for(int i=0;i<10;i++)
    {
        cout << arr1[i] << " - ";
    }
    delete[] arr1; //9

    //6
    int *arr2 = new int[11];
    for(int i=0;i<11;i++)
    {
        arr2[i] = i + 100;
    }
    for(int i=0;i<11;i++)
    {
        cout << arr2[i] << " - ";
    }
    delete[] arr2; //9

    //8
    int *arr3 = new int[20];
    for(int i=0;i<20;i++)
    {
        arr3[i] = i + 100;
    }
    print_array(cout, arr3, 20);
    delete[] arr3; //9

    //10
    int x;
    vector <int> v;
    for(int i=0;i<10;i++)
    {
        x = i + 100;
        v.push_back(x);
    }
    print_vector(cout, v);

    vector <int> v1;
    for(int i=0;i<11;i++)
    {
        x = i + 100;
        v1.push_back(x);
    }
    print_vector(cout, v1);

    vector <int> v2;
    for(int i=0;i<20;i++)
    {
        x = i + 100;
        v2.push_back(x);
    }
    print_vector(cout, v2);
}

