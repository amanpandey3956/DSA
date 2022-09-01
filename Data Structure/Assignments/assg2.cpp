#include<iostream>
using namespace std;
class test
{
public:
    int x,y;
};
int main()
{
    test *p;
    p=new test;
    cout<<"enter value of x"<<endl;
    cin>>p->x;
    cout<<"enter value of y"<<endl;
    cin>>p->y;
    cout<<"addition is:"<<endl;
    cout<<p->x+p->y<<endl;



}
