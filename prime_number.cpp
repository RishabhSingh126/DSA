#include<bits/stdtr1c++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"Prime number"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Non prime number"<<endl;
    }
}