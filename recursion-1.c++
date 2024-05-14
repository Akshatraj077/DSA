#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int ans;
    if(n<=0)
    return 0;
    else if(n<=1)
    return 1;
    ans= solve(n-1) + solve(n-2);
    return ans;
}

int main() 
{
    int n,ans;
    cout<<"enter the value of n\n";
    cin>>n;
    
    ans=solve(n);
    
    cout<<ans;

    return 0;
}