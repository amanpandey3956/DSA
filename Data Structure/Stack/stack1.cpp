#include<iostream>
using namespace std;
class stack
{
private:
    int top;
    int max=3;
    int arr[3];
public:
    stack()
    {
        top=-1;
    }
    void push(int x)
    {
        if(top==max-1)
        {
            cout<<"stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=x;
        cout<<"Push item is"<<arr[top]<<endl;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<"Poped item is"<<arr[top]<<endl;
        top--;
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();
    st.pop();
    st.pop();
    st.pop();

}
