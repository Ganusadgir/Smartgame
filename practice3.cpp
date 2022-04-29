#include<iostream>
using namespace std;

class A
{
    public:
    int x;
    string name;
};

int main()
{
    A a;
    a.x=20;
    a.name="ganesh";
    cout<<a.x<<endl;
    cout<<a.name;
    return 0;
}
