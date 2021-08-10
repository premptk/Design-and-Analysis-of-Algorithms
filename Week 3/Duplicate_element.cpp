#include<bits/stdc++.h>
using namespace std;

int hoare(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i=l-1,j=h+1;
    while(true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if(i>=j) return j;
        swap(arr[i],arr[j]);
    }  
}

void q_sort(int arr[], int l, int r)
{
    if(l<r)
    {
        int p = hoare(arr,l,r);
        q_sort(arr,l,p);
        q_sort(arr,p+1,r);
    }
}

string solve(int arr[], int n)
{
    q_sort(arr,0,n-1);
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
            return "YES";
    }
    return "NO";
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
        cout<<solve(arr,n)<<endl;
    }
    return 0;
}
