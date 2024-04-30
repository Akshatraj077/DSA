// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#define max 100
using namespace std;

int main() 
{
    int a,bit,ans=0,i=0,j=1;
    
    cout<<"enter the bin number\n";
    cin>>a;
    
    while(a!=0)
    {
        bit= a % 10;
        if(bit==1)
            ans= ans+ pow(2,i);
        i++;
        a= a/10;
    }
    cout << ans;
    
    return 0;
}