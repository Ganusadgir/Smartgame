#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
    

}
int main()
{
    int x, y;
    cout<<"enter bigger num";
    cin>>x;
    cout<<"enter smaller num";
    cin>>y;
    int c = gcd(x,y);
    cout<<c;
    return 0;
}