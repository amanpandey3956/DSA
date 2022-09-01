#include<iostream>
using namespace std;
class test
{
public:
    int x,y;
    test()
    {
        x=10;
        y=20;
    }
};
int main()
{
    test t1;
    test *p;
    p=&t1;
   // p->x;
    //p->y;
    cout<<p->x+p->y<<endl;



}
