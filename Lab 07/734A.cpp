#include<iostream>
using namespace std;
main()
{
    int n,s=0,p=0;
    char a;
    cin>>n;
    for( int i=1; i<=n; i++)
    {
        cin>>a;
        if(a=='A') s++;
        else p++;
    }
    if(s>p)
        cout<<"Anton";
    else if(s<p)
    cout<<"Danik";
    else
        cout<<"Friendship";
}
