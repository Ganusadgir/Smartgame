#include<bits/stdc++.h>
using namespace std;

class stack
{
    int top;
    int arr[5];
    public:
    stack()
    {
        top = -1;
        for(int i=0;i<5;i++)
        {
            arr[i]=0;
        }
    }
    bool isemty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        return false;
    }
    bool isfull()
    {
        if(top==4)
        return true;
        else
        return false;
    }
    void push(int val)
    {
        if(isfull())
        cout<<"stack is overflow"<<endl;
        else
        {
            top++;
            arr[top]=val;
        }   
    }
    int pop()
    {
        if(isemty())
        {
            cout<<"stack underflow"<<endl;
            return 0;
        }
        else
        {
            int popvalue =arr[top];
            arr[top]=0;
            top--;
            return popvalue;
        }
    }
    int count()
    {
        return (top+1);
    }
    int peek(int pos)
    {
      if(isemty())
      {
          cout<<"stack underflow"<<endl;
      }
      else
      {
          return arr[pos];
      }
    }
    void change(int pos, int val)
    {
        arr[pos]=val;
        cout<<"item changed at location"<<pos<<endl;
    }
    void display()
    {
        cout<<"all values of stack are"<<endl;
        for(int i=4;i>+0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }
};

int main()
{
    int option,postion,value;
    do{
        stack s;
        cout<<"what option do you want to perform? select number,enter 0 to exist."<<endl;
        cout<<"1. push()"<<endl;
        cout<<"2. pop()"<<endl;
        cout<<"3. isemety()"<<endl;
        cout<<"4. isfull()"<<endl;
        cout<<"5. peek()"<<endl;
        cout<<"6. count()"<<endl;
        cout<<"7. change()"<<endl;
        cout<<"8. display()"<<endl;
        cout<<"9. clear screen"<<endl;

        cin>>option;
        switch (option)
        {
        case 1:
           cout<<"enter an option to push in the stack"<<endl;
           cin>>value;
           s.push(value);
            break;
        case 2:
           cout<<"pop function called-pop value:"<<s.pop()<<endl;
           break;
        case 3:
          if(s.isemty())
           cout<<"stack is emety:"<<endl;
           else
            cout<<"stack is not emty"<<endl;
            break;
        case 4:
           if(s.isfull())
           cout<<"stack is full:"<<endl;
           else
            cout<<"stack is not full"<<endl;
            break;
        case 5:
          cout<<"enter a psotion:"<<endl;
          cin>>postion;
          cout<<"peek function called"<<s.peek(postion)<<endl;
          break;
        case 6:
          cout<<"count fuction called"<<s.count()<<endl;
          break;
        case 7:
          cout<<"enter the postion of item that you want to change:";
          cin>>postion;
          cout<<"enter the value of item that you want to change:";
          cin>>value;
          s.change(postion,value);
          break;
        case 8:
          s.display();
          break;
        case 9:
          system("cls");
        default:
        cout<<"enter the proper option number"<<endl;
        }
    
    } while (option!=0);
    
    return 0;
}