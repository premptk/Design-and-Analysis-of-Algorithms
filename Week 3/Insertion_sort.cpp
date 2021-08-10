#include<iostream>
using namespace std;

void solve(int arr[], int n)
{
    int key,i,j,shift=0,cmp=0;
    for(i=1;i<n;i++)
    {
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
            shift++;
            cmp++;
        }
        arr[j+1] = key;
        shift++;
    }
    for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    cout<<"\ncomparisons = "<<cmp<<endl;
    cout<<"shifts = "<<shift<<endl;
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
        solve(arr,n);
    }
    return 0;
}
