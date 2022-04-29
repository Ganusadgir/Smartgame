#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int num=0;
    string actual = "";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=48 and s[i]<=57)
        {
            int digit = s[i]-48;
            num = num*10 + digit;
        }
        else{
            actual+=s[i];
        }
    }
    if(num = actual.length())
    {
        cout<<"TRUE"<<" "<<actual.length();
    }
    else
    {
        cout<<"FALSE"<<" "<<actual.length();
    }
    return 0;

}