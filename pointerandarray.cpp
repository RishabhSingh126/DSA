#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30};
    cout<<*arr<<endl;
    int *aptr=arr;
    for(int i=0;i<3;i++)
    {
        cout<<*aptr<<endl;
        aptr++;
    }
    return 0;
}