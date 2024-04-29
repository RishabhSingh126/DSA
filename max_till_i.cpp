//Max till i
//Given an array of size n. For every i from 0 to n-1 output max(a[0],a[1],.......,a[n])
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int mx=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
}
