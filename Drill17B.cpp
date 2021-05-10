#include "std_lib_facilities.h"
//4
void print_array(ostream& os, int* a, int n)
{
    for(int i=0;i<n;i++) 
    {
        os << i << " = " << a[i] << "." << endl;
    }
    cout << endl;
}

int main()
{
    int i;
    //1
    int a = 7;
    int *p1 = &a;
    //2
    cout<<"p1 = "<<p1<<" it points to ->"<<*p1<<endl;
    //3
    int *array = new int[7];
    for(i=0;i<7;i++)
    {
        array[i] = (i+1)*2;
    }
    int *p2 = &*array;
    //4
    cout<<"p2 = "<<p2<<endl;
    print_array(cout , array ,7);
    //5
    int *p3 = p2;
    //6
    p2 = p1;
    //7
    p1 = p3;
    //8
    cout<< "p1 = "<<p1<<" it points to ->"<<*p1<<endl;
    cout<< "p2 = "<<p2<<" it points to ->"<<*p2<<endl;
    //9
    delete[] p1;
    delete[] p2;
    delete[] p3;
    //10
    int *array2 = new int[10];
    for(i=0;i<10;i++)
    {
        array2[i] = (i+1)*2;
    }
    *p1 = *array2;
    //11
    int *array3 = new int[10];
    *array3 = *p2;
    //12
    for(i=0;i<10;i++)
    {
        array3[i] = array2[i];
    }
    delete[] array2;
    delete[] array3;
    //13
    vector <int> vec1;
    vector <int>* vec2 = &vec1;
    for(i=0;i<10;i++)
    {
        vec1[i]=(i+1)*2;
    }
    
    vector <int> vec3;
    vector <int>* vec4 = &vec3;
    for(i=0;i<10;i++)
    {
        vec4[i] = vec2[i];
    }
}   
