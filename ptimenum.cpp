#include<bits/stdc++.h>
using namespace std;

void prime(int num)
{
    int div=0;
    for (int i = 0; i <=num; i++)
    {
        if(num%i==0)
        div++;
    }
    if(div==2)
    cout<<num<<" ";
    
}
int main()
{
    int a,b;
    cout<<"enter a num";
    cin>>a>>b;
    for (int i = a; i <=b; i++)
    {
        prime(i);
    }
    return 0;
    

}