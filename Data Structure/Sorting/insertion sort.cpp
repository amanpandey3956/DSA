#include<iostream>
using namespace std;
int main()
{
    int i,n,j,c;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter your array:"<<endl;
    for(int i=0;i<n;i=i+1)
    {
        cin>>arr[i];
    }
    for(j=0;j<n;j++)
    {
         i=j;
        while(i>=0)
        {
            if(arr[i]<arr[i-1])
          {
               c=arr[i];
              arr[i]=arr[i-1];
              arr[i-1]=c;
          }
          i--;

        }

    }
    cout<<"sorted array is "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }


}


