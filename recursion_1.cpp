#include<bits/stdc++.h>
using namespace std;
int a=0;
void print()
{
    if(a==3)
    {
        return;
    }
    cout<<a<<endl;
    a++;
    print();
}
int main()
{
    print();
}