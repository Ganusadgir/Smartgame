#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool f(int x,int y)
{
    return x>y;
}
int main()
{
    //c++ stl
    vector<int>A={4,3,2,8,6};
    cout<<A[2]<<endl;
    sort(A.begin(),A.end());//0(Nlogn)
    bool present=binary_search(A.begin(),A.end(),3);//true
    present=binary_search(A.begin(),A.end(),5);//false
    A.push_back(100);
    present=binary_search(A.begin(),A.end(),100);//true
    //2 3 4 6 8 100;
    A.push_back(200);    
    //2 3 4 6 8 100 200
     vector<int>::iterator it=lower_bound(A.begin(),A.end(),100);//>=
      vector<int>::iterator it2=upper_bound(A.begin(),A.end(),100);//>
      cout<<*it<<" "<<*it2<<endl;
      cout<<it2-it<<endl;

      sort(A.begin(),A.end(),f);
      vector<int>::iterator it3;
     /* for (it3=A.begin();it3!=A.end();it3++)
      {
        cout<<*it3<<" ";
      }*/
      for(int x: A)
      {
          cout<<x<<" ";
      }
      
    return 0;
}