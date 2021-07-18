#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
        if(arr[i]==x)
            return i;
    return -1;
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
        cout<<linear_search(arr,n,x)<<endl;
    }
    return 0;
}
