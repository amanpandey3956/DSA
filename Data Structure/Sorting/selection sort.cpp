#include<iostream>
using namespace std;
int main()
{
    int i,n,j,c,min;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter your array:"<<endl;
    for(int i=0;i<n;i=i+1)
    {
        cin>>arr[i];
    }
    for(j=0; j<n-1;j++)
    {
         min=i;
        for(i=0;i<n-1;i++)
        {
             min=i;
          if(arr[min]>arr[min+1])
          {
              c=arr[min];
              arr[min]=arr[min+1];
              arr[min+1]=c;
          }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}

