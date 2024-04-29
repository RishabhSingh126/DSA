#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int ans=1;
    for(int i=2;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}