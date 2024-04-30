// Online C++ compiler to run C++ program online
#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n,k=0,flag=1;
    
    cout<<"enter a number\n";
    cin>>n;
    
    while(n!=0)
    {
       if(k > (INT_MAX/10) || k*10 < (INT_MIN)){
           cout<<"out of range";
           flag=0;
           break;
       }
       k=(k*10)+(n%10);
       n=n/10;
    }
    
    if(flag)
        cout<<"reversed number is "<<k;
    
    return 0;
}