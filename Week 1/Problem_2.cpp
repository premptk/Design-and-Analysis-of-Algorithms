#include<iostream>
using namespace std;

void binary_search(int arr[], int n, int x)
{
    int cnt=0,beg=0,end=n-1;
    bool flag=false;
    while(beg <= end)
    {
        int mid = (beg+end)/2;
        cnt++;
        if(arr[mid]==x)
        {
            cout<<"Present "<<cnt;
            return;
        }
        else if(arr[mid] < x)
        {
            beg = mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<"Not Present "<<cnt;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>x;
        binary_search(arr,n,x);
        cout<<"\n";
    }
    return 0;
}