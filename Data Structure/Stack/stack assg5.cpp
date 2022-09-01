#include <iostream>
#include<string.h>
using namespace std;
class Stack
{
private:
    int top;
    char arr[50];
    const int MAX = 50;

public:
    Stack()
    {
        top = -1;
    }
    bool isFull()
    {
        bool f = false;
        if (top == MAX - 1)
        {
            f = true;
        }
        return f;
    }
    // check that stack is empty or not
    bool isEmpty()
    {
        bool f = false;
        if (top == -1)
        {
            f = true;
        }
        return f;
    }
    // get top item from stack without removing it
    char peek()
    {
        char x;
        x = arr[top];
        return x;
    }
    void display()
    {
        int i;
        for (i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
    void push(char x)
    {
        if (isFull())
        {
            cout << "Stack is full" << endl;
            return;
        }
        // push
        top++;
        arr[top] = x;
        cout << "Pushed item is " << arr[top] << endl;
    }

    char pop()
    {
        char  ch;
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        cout << "Poped item is " << arr[top] << endl;
        ch=arr[top];
        top--;
        return ch;
    }
};
int getPref(char op)
{
    int x;
    switch (op)
    {
    case '+':
    case '-':
        x = 1;
        break;
    case '*':
    case '/':
        x = 2;
        break;
    }
    return x;
}
int main()
{
    Stack st;
    char exp[50];
    char postfix[50];
    cout << "Enter infix expression " << endl;
    cin >> exp;
  //cout << exp << endl;
    int i,j=0;
    for(i=0;i<strlen(exp);i++)
    {
       if(exp[i]>=97 && exp[i]<=122)
       {
           postfix[j]=exp[i];
           j++;
       }
       else if(exp[i]=='(')
       {
           st.push(exp[i]);
       }else if(exp[i]==')')
       {
           char ch1;
            do
            {
                ch1=st.pop();
                postfix[j]=ch1;
                j++;
            } while (ch1!='(');

       }else{
           char ch2=st.peek();
           if(getPref(ch2)>=getPref(exp[i]))
           {
              char ch2=st.pop();
              postfix[j] = ch2;
              j++;

           }
            st.push(exp[i]);
       }
    }
     while(!st.isEmpty())
        {
            char ch2 = st.pop();
            postfix[j] = ch2;
            j++;
        }
        cout<<"postfix exp is :"<<postfix<<endl;
}
