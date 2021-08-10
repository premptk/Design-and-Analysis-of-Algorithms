#include<bits/stdc++.h>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void solve(int arr[], int n)
{
    int min,comp=0,swp=0;
    for(int i=0;i<n-1;i++)
    {
        min = i;
        for(int j=i+1;j<n;j++)
        {
            comp++;
            if(arr[j] < arr[min])
            {
                min=j;
            }
        }
        swap(arr[i],arr[min]);
        swp++;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\ncomparison = "<<comp<<endl;
    cout<<"swap = "<<swp<<endl;
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
