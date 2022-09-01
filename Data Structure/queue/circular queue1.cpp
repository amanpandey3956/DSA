#include <iostream>
using namespace std;
class CQueue
{
private:
    int rear, front;
    int arr[5];

public:
    CQueue()
    {
        rear = -1;
        front = -1;
    }

    void enqueue(int x)
    {
        if ((front == 0 && rear == 4) || (rear == front - 1))
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (front == -1 && rear==-1)
        {
            front = rear = 0;
        }
        else if (front != 0 && rear == 4)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }

        arr[rear] = x;
        cout << "Enqueue item is at postion "<<rear<<" "<< arr[rear] << endl;
    }

    void dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        int x = arr[front];
        cout << "Dequeue item is " << x << endl;

        if (front == rear)
        {
            rear = front = -1;
        }
        else if (front == 4)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    void display()
    {
        cout<<"###############################"<<endl;
        int i;
        if(front==-1)
        {
            cout<<"Queue if empty!!"<<endl;
            return;
        }
        else if(rear>front)
        {
            for(i=front; i<=rear; i++)
            {
                cout<<arr[i]<<endl;
            }
        }
        else
        {
            for(i=front; i<5; i++)
            {
                cout<<arr[i]<<endl;
            }
            for(i=0; i<=rear; i++)
            {
                cout<<arr[i]<<endl;
            }
        }
    }
};
int main()
{
    CQueue c;
    c.enqueue(10);
    c.enqueue(20);
    c.enqueue(30);
    c.enqueue(40);
    c.enqueue(50);
    c.enqueue(60);
    c.display();
    c.dequeue();
    c.enqueue(90);
    c.display();
    return 0;
}
