#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i,key;
    cout<<"enter your array:"<<endl;
    for(int i=0;i<5;i=i+1)
    {
        cin>>arr[i];
    }
    bool f=false;
    cout<<"enter key to find:"<<endl;
    cin>>key;
    for(int i=0;i<5;i++)
    {
        if (arr[i]==key)
        {
            f=true;
            break;
        }
     }
     if(f==true)
     {
        cout<<"key found at position: "<<i<<endl;
     }
     else
     {
         cout<<"key not exist"<<endl;
     }

}
