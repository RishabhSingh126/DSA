#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int originalnum=n;
    while(n!=0)
    {
        int lastdigit=n%10;
        sum=sum+pow(lastdigit,3);
        n=n/10;
    }
    if(sum==originalnum)
    {
        cout<<"Armstrong number"<<endl;
    }
    else
    {
        cout<<"Not armstrong number"<<endl;
    }
}