#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len=str.length();
    string frd=str[len-1]+str.substr(0,len-1);
    cout<<frd<<endl;
    string bck=str.substr(1,len)+str[0];
    cout<<bck<<endl;
    if(frd==bck)
    {
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;

}