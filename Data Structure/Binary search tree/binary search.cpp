#include<iostream>
using namespace std;
int main()
{
    int i,beg=0,en=4,key,mid;
    bool f=false;
    cout<<"enter your array:"<<endl;
    int arr[5];
    for(int i=0; i<5; i=i+1)
    {
        cin>>arr[i];
    }
    cout<<"enter key to find:"<<endl;
    cin>>key;

    while(beg<=en)
    {
        mid=(beg+en)/2;
        if(arr[mid]==key)
        {
            f=true;
            break;
        }
        else if(key<arr[mid])
        {
            en=mid-1;
        }
        else if(key>arr[mid])
        {
            beg=mid+1;
        }

    }
    if(f==true)
    {
        cout<<"item found at:"<<mid<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }


}

