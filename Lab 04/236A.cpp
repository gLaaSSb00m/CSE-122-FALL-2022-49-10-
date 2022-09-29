//Codeforces Problem No -236A
//Problame name -Boy or Girl
#include<iostream>
#include<string>
using namespace std;
int main()
{
   string a;
   int d=0;
   int c=0;
   cin>>a;
   for(int i=0;i<a.size();i++)
   {
       int j;
        for(j=0;j<i;j++)
   {
       if(a[i]==a[j])
        {
            break;
        }


   }
   if(i==j)
    d++;
   }

   if(d%2==0)
    cout<<"CHAT WITH HER!";
   else
   {
       cout<<"IGNORE HIM!";

   }
}
