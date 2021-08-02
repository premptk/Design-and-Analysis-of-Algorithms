#include<iostream>
using namespace std;
void findcount(int arr[], int n, int x)
{
    //Time Complexity => O(logn)
    int count=0;
    int beg=0,end=n-1,mid;
    while(beg<=end)
    {
        mid = (beg+end)/2;
        if(arr[mid]==x)
        {
            count++;
            int j=mid-1;
            while(arr[j]==x)
            {
                count++;
                j--;
            }
            j=mid+1;
            while(arr[j]==x)
            {
                count++;
                j++;
            }
            cout<<x<<" - "<<count<<endl;
            return;
        }
        else if(arr[mid]<x)
            beg=mid+1;
        else
            end=mid-1;
    }
    cout<<"Key not Found";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>x;
        findcount(arr,n,x);
    }
    return 0;
}
