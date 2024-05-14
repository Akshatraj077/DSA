#include <bits/stdc++.h>
#define max 10
using namespace std;

bool bs(int arr[],int m,int start,int end)
{
    bool ans;
    if(start>end)
    return false;
    int mid=0;
    mid=(start+end)/2;
    if(arr[mid]==m)
        return true;
    else if(arr[mid]>m)
        ans= bs(arr,m,start,m-1);
    else
        ans= bs(arr,m,m+1,end);
    return ans;
}

int main() 
{
    int arr[max],n,m,check;
    cout<<"enter the value of n\n";
    cin>>n;
    cout<<"enter the value of array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the value to be found\n";
    cin>>m;
    
    check= bs(arr,m,0,n);
    
    if(check){
        cout<<"present\n";
    }
    else
        cout<<"absent\n";

    return 0;
}