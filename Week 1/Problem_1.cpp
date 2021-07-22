#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
        if(arr[i]==x)
            return i+1;
    return 0;
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
        if(res=linear_search(arr,n,x))
            cout<<"Present "<<res;
        else
            cout<<"Not Present "<<n;
        cout<<"\n";
    }
    return 0;
}
