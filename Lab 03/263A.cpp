//Codeforces Problem No - 339A
//Problame name -Helpful Maths
#include<iostream>
using namespace std;
int main()
{
    int a[5][5];
    int i,j,c,b;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            {
                cin>>a[i][j];

            }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            {

             if(a[i][j]==1)
			{
				cout<<abs(i-2)+abs(j-2)<<endl;
				break;
			}
            }
    }
    return 0;
}
