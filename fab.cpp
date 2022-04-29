#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1=0,n2=1,n3,i,num;
    cin>>num;
    for (i = 1; i <= num; i++)
    {
        if(num==1)
        cout<<n1<<" ";
        if(num==2)
        {
            cout<<n1<<" "<<n2<<" ";
        }
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
        
    }
    
    return 0;
}