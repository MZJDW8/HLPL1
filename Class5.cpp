#include "std_lib_facilities.h"

using namespace std;

int main()
{
    vector<string> name;
    int i , n;
    string in;
    cout<< "Enter 5 names: "<<endl;
    for(i=0;i<5;i++)
    {
        cin >> in;
        name.push_back(in);
    }

    vector<double> age;
    cout<<"Enter 5 ages:"<<endl;
    for(i=0;i<5;i++)
    {
        cin >> n;
        age.push_back(n);
    }

    vector<pair<string,int>> vec;
    for(i=0;i<5;i++)
    {
        vec.push_back(make_pair(name[i],age[i]));
    }
    sort(vec.begin() , vec.end());
    
     cout<<"These are the name with there ages after being sorted! "<< endl;
    for(i=0;i<5;i++)
    {
        cout << vec[i].first << " : " << vec[i].second <<endl;
    }
    
    sort( name.begin() , name.end() );
    cout <<"Lexiographicaly -> "<< name[0] << " Is the first string!"<<endl;
    cout <<"Lexiographicaly -> "<< name[4] << " Is the first string!"<<endl;
    return 0;
}