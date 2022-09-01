#include <iostream>
#include <string.h>
using namespace std;
class InfixToPrefix
{
private:
    char exp[50];
    char postfix[50];
    char opstack[50];
    int top, i, j;
    char *op;
public:
    InfixToPrefix()
    {
        top = -1;
        cout << "Enter expression:";
        cin >> exp;
        strrev(exp);
        j = 0; //postfix expression index
    }
    int getPre(char ch)
    {
        int p = 0;
        switch (ch)
        {
        case '/':
        case '*':
            p = 2;
            break;
        case '+':
        case '-':
            p = 1;
            break;
        default:
            break;
        }
        return p;
    }
    char peek()
    {
        return opstack[top];
    }
    void convert()
    {
        for (i = 0; i < strlen(exp); i++)
        {
//cout<<exp[i]<<endl;
            if (exp[i] >= 97 && exp[i] <= 122)
            {
                postfix[j] = exp[i];
                j++;
            }
            else if (exp[i] == '(')
            {
                push(exp[i]);
            }
            else if (exp[i] == ')')
            {
                while (1)
                {
                    if (!isEmpty())
                    {
                        char c = pop();
                        if (c != '(')
                        {
                            postfix[j] = c;
                            j++;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
            else
            {
                if (getPre(peek()) >= getPre(exp[i]))
                {
                    char c = pop();
                    postfix[j] = c;
                    j++;
                }
                push(exp[i]);
            }
        }
        while(!isEmpty())
        {
            char c = pop();
            postfix[j] = c;
            j++;
        }
        strrev(postfix);
        cout << postfix << endl;
    }
    void push(char x)
    {
        if (top == 49)
        {
            cout << "Stack is full";
        }
        else
        {
            top++;
            opstack[top] = x;
        }
    }
    char pop()
    {
        char ch;
        ch = opstack[top];
        top--;
        return ch;
    }
    bool isEmpty()
    {
        bool flag = 0;
        if (top == -1)
        {
            flag = 1;
        }
        return flag;
    }
};
int main()
{
    InfixToPrefix ob;
    ob.convert();
}
