#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=1;
    int i=0;
    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            cout<<a;
            j=j+1;
            a=a+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}