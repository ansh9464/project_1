#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k=3;
    for(i=0;i<6;i++)
    {
        if(i>2)
        k=k-1;
        else
            k=3;
        cout<<setw(10);
        for(j=0;j<=6;j++)
        {
            int flag=0;
            if(i==1 && j==k){     //for * at middle position of second line
                    cout<<"*";
                    k=k-1;
            }
            if(i>0)
                if(j==3-k || j==3+k)
                {
                    if(i>2 && j>3 && i<5)
                        cout<<" *";
                    else
                        cout<<"*";
                }
                else if(i==2 && j==5)
                    cout<<" ";
                else
                        cout<<"  ";
            else
            {
                if(j==3-k || j==3+k || j==k)
                    cout<<"     ";
                else
                    cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
