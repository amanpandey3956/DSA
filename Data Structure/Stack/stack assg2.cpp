#include<iostream>
using namespace std;
class stack
{
private:
    int top;
    int max=5;
    char arr[5];
public:
    stack()
    {
        top=-1;
        cout<<"enter character array:"<<endl;
        cin>>arr;
    }
    void push()
    {
        if(top==max-1)
        {
            cout<<"stack is full"<<endl;
            return;
        }
        top++;
       // arr[top]=x;
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
    st.push();
    st.push();
    st.push();
    st.push();
    st.push();
    cout<<"=================="<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();



}
