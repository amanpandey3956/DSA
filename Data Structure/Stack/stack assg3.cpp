#include<iostream>
using namespace std;
class stack
{
private:
    int top;
    int arr[10];
    const int max=10;
public:
    stack()
    {
        top=-1;
    }
    bool isFull()
    {
        bool f=false;
        if(top==max-1)
        {
            f=true;
        }
        return f;
    }
    bool isEmpty()
    {
        bool f=false;
        if(top==-1)
        {
            f=true;
        }
        return f;
    }
    int peek()
    {
        int x;
        x=arr[top];
        return x;
    }
    void display()
    {
        int i;
        for(i=top;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }
    void push(int x)
    {
        if(isFull())
        {
            cout<<"stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=x;
        cout<<"Pushed item is :"<<arr[top]<<endl;
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<"Poped item is :"<<arr[top]<<endl;
        top--;
    }
};
int main()
{
    stack st;
    int number;
    cout<<"enter decimal number"<<endl;
    cin>>number;
    while(number>0) {
      int rem = number%2;
      number = number/2;
      st.push(rem);
   }
   while(!st.isEmpty())
    {
      st.pop();
   }



}
