#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
};

class List
{
public:
    Node *start;
    List()
    {
        start = nullptr;
    }
    void insert(int x)
    {
        Node *p;
        p = new Node;
        p->data = x;
        if (start == nullptr)
        {
            p->next = nullptr;
            start = p;

        }
        else
        {
            p->next = start;
            start = p;
        }
    }
    void insertRare(int x)
    {
        Node *p;
        p = new Node;
        p->data = x;
        p->next = nullptr;
        if (start == nullptr)
        {
            p->next = nullptr;
            start = p;
        }
        else
        {
            Node *temp;
            temp = start;
            while (temp != nullptr)
            {

                if (temp->next == nullptr)
                {
                    temp->next = p;
                    return;
                }
                temp = temp->next;
            }
        }
    }
    void Disp()
    {
        Node *temp;
        temp = start;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    void deleteItem()
    {
        if (start == nullptr)
        {
            cout << "list is empty ";
            return;
        }

        start = start->next;
        cout << "item deleted " << endl;
    }
    void deleteSp(int x)
    {
        Node *temp1;

        temp1 = start;
        Node *prev;

        while (temp1 != nullptr)
        {
            if (temp1->data == x)
            {
                prev->next = temp1->next;
                return;
            }
            prev = temp1;
            temp1 = temp1->next;
        }
    }
    void deletRare()
    {

        Node *temp;
        temp = start;
        Node *prev;
        while (temp != nullptr)
        {
            if (temp->next == nullptr)
            {
                prev->next = nullptr;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }
    void replace(int x, int y)
    {
        Node *temp1;
        temp1 = start;

        while (temp1 != nullptr)
        {
            if (temp1->data == x)
            {
                temp1->data = y;
                return;
            }
            temp1 = temp1->next;
        }
    }
};

int main()
{
    List l1;

    l1.insert(10);
    l1.insert(20);
    l1.insert(30);
    l1.insert(40);
    l1.insert(50);
    l1.insertRare(60);
    l1.deleteSp(20);
    l1.deletRare();
    l1.Disp();
    return 0;
}
