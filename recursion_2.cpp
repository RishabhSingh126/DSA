#include<bits/stdc++.h>
using namespace std;
void f(int i,int n)
{
    if(n<i)
    {
        return;
    }
    cout<<"ABC"<<endl;
    f(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    f(1,n);
}