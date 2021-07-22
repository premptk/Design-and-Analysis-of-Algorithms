#include<iostream>
using namespace std;

void jump_search(int arr[], int n, int x)
{
    int cnt=0;
    for(int i=0;i<n;i=i+2)
    {
        cnt++;
        if(arr[i]==x)
        {
            cout<<"Present "<<cnt<<endl;
            return;
        }
        else if(arr[i] > x)
        {
            if(i==0)
            {
                cout<<"Not Present "<<cnt<<endl;
                return;
            }
            else
            {
                cnt++;
                if(arr[i-1] == x)
                {
                    cout<<"Present "<<cnt<<endl;
                    return;
                }
                else
                {
                     cout<<"Not Present "<<cnt<<endl;
                     return; 
                }
            }
        }
    }
    cout<<"Not Present "<<cnt<<endl;
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
        jump_search(arr,n,x);
    }
    return 0;
}