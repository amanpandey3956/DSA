#include<iostream>
using namespace std;
class stack
{
private:
    int top;
    int max=10;
    char arr[10];
public:
    stack()
    {
        top=-1;
    }
    void push(char x)
    {
        if(top==max-1)
        {
            cout<<"stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=x;
        cout<<"Push item is :"<<"\t"<<arr[top]<<endl;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<"Poped item is :"<<"\t"<<arr[top]<<endl;
        top--;
    }
};
int main()
{
    stack st;
    st.push('H');
    st.push('E');
    st.push('L');
    st.push('L');
    st.push('O');
    cout<<"=================="<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

}
