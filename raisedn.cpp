#include<bits/stdc++.h>
using namespace std;

int raised(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    else{
        return n*raised(n,p-1);
    }
}
int main()
{
   int x,y;
   cin>>x>>y;
   cout<<raised(x,y);
   return 0;
}