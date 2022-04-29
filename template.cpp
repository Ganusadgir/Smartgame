#include<iostream>
using namespace std;

template<class x>x add(x a,x b)
{
   x result=a+b;
   return result;

}



int main()
{
    int i=2;
    int j=3;
    float m=3.2;
    float n=3.5;
    cout<<add(i,j)<<endl;
    cout<<add(m,n);
    return 0;

}
