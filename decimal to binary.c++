// Online C++ compiler to run C++ program online
#include <iostream>
#define max 100
using namespace std;

int main() 
{
    int a,b[max],k=0,i;
    cout<<"enter the number\n";
    cin>>a;
    while(a!=0){
        b[k]=a%2;
        a=a/2;
        k++;
    }
    for(i=k-1;i>=0;i--)
    {
        cout << b[i] <<" ";
    }
    return 0;
}


// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
#define max 100
using namespace std;

int main() 
{
    int a,bit,ans=0,i=0;
    
    cout<<"enter the number\n";
    cin>>a;
    
    while(a!=0)
    {
        bit= a & 1;
        ans=  (bit * pow(10,i)) + ans;
        i++;
        a= a>>1;
    }
    
    cout << ans;
    return 0;
}