#include<iostream>
using namespace std;
class Node
{
public:
    int info;
    Node *next;
};
class linkedlist
{
    Node *start=nullptr;
public:
    linkedlist()
    {

    }
    void insert(int x)
    {
        Node *p;
        p=new Node;
        p->info=x;
        if (start == nullptr)
        {
            p->next=nullptr;
            start=p;
        }
        else
        {
            p->next=start;
            start=p;
        }
        cout<<"Inserted item is"<<start->info<<endl;
    }
    void show()
    {
        cout<<"*****************"<<endl;
        Node *temp;
        temp=start;
        while(temp!=nullptr)
        {
            cout<<temp->info<<endl;
            temp=temp->next;
        }
    }
    void Delete()
    {
        if (start == nullptr)
        {
            cout<<"empty"<<endl;
            return;
        }
        cout<<"deleted item is :"<<start->info<<endl;
        start=start->next;
    }
};
    int main()
    {
        linkedlist ob;
        ob.insert(10);
        ob.insert(20);
        ob.insert(30);
        ob.insert(40);
        ob.show();
        ob.Delete();
        ob.show();
    }
