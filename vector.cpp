#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }   //1 2 3
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    for(auto element: v)      // element is element of vector 
    {                        //auto will automatically the datatype of element
        cout<<element<<endl;
    }

    v.pop_back();   // 1 2 

    vector<int> v2(3,50);  //3 is size and 50 is element
    for(int i=0;i<v2.size();i++)  // 50 50 50
    {
        cout<<v2[i]<<endl;
    }
    swap(v,v2);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<endl;
    }
    return 0;
}