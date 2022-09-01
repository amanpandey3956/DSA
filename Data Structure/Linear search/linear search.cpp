#include<iostream>
using namespace std;
int linearsearch(int arr[],int key)
{
    for(int i=0;i<5;i++)
    {
        if (arr[i]==key)
        {
            cout<<"key found at position: "<<endl;
            return i;
        }
    }
    return -1;
}
int main()
{
    int i;
    cout<<"enter your array:"<<endl;
    int arr[5];
    for(int i=0;i<5;i=i+1)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter key to find:"<<endl;
    cin>>key;
    cout<<linearsearch(arr,key)<<endl;
}
