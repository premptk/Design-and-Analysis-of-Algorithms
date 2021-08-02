#include<iostream>
using namespace std;

void returnsumindex(int arr[], int n)
{
    //Naive Aproach => O(n^3)
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]==arr[k])
                {
                    cout<<i+1<<", "<<j+1<<", "<<k+1<<endl;
                    return;
                }
            }
        }
    }
    cout<<"No sequence found."<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        returnsumindex(arr,n);
    }
    return 0;
}