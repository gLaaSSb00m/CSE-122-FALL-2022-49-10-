//Codeforces Problem No -266A	
//Problame name -Stones on the Table
#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cin>>x;
    char s[50];
    cin>>s;
    for(int i=0;i<x;i++)
    {
        if(s[i]==s[i+1])
        {
            n++;
        }
    }
    cout<<n;
}
