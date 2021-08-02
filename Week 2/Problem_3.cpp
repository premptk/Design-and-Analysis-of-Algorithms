#include<iostream>
#include<algorithm>
using namespace std;

int CheckKey(int arr[], int n, int key)
{
    //Time Complexity => O(n^2)
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[j] - arr[i])==key)
                count++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,key;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>key;
        cout<<CheckKey(arr,n,key)<<endl;
    }
    return 0;
}