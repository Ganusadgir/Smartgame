#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    static int x;
    A()
    {
        x++;
    }
};
int A::x = 0;
int main()
{
    A a,b,c;//loacl stack
    A d,e,f,g;
    //dynamic;
   //A* ptr=(A*)malloc(sizeof(A));//allocates memery ,doesnt call constructor
  A* ptr == new A;
  free(ptr);//doesnt call destr;
  delete ptr;
    cout<<A::x<<endl;
    return 0;
}