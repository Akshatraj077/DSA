//i/p->akshat o/p->no suf no pre , i/p->aabcaab o/p->suf and pre is aab.
#include <bits/stdc++.h>
#define max 100
using namespace std;

int main() 
{
    char arr[max],temp[max],tm[max]; int i,l,j,k,m,p=0,c=0,l1=0,l2;
   
    cout<<"enter array\n";
    cin>>arr;
    
    l=strlen(arr);
    
    for(i=0;i<l;i++)
    {
       for(j=l-i-1;j>=i && j<l ;j++)
       {
           k=0;
           m=j;
           while(arr[k]==arr[m] && m<l && k<=i){
               p=0;
               temp[p]=arr[k];
               p++;
               k++;
               m++;
               if(p==i+1)
               c=1;
           }
           temp[p] = '\0';
           l2=strlen(temp);
           if(l2>l1){
               strcpy(tm,temp);
               l1=strlen(tm);
           }
       }
    }
    if(c){
        cout<<"suffix and prefix of array is\n";
        for(i=0;i<l1;i++)
        {
           cout<<tm[i];
        }
    }
    else
    cout<<"suffix and prefix not present\n";
    
    return 0;

}

////////////////////////////////AND////////////////////////////////////////

#include <bits/stdc++.h>
#define max 100
using namespace std;

int main() 
{
    string arr,tm;int l,i;
    tm="";
    cout<<"enter string\n";
    getline(cin,arr);
    
    l=arr.length();
    
    for(i=0;i<l;i++)
    {
        if(arr.substr(0,i+1) == arr.substr(l-1-i,i+1) && i<(l-1))
        tm=arr.substr(0,i+1);
    }
    
    cout<<"substring is "<<tm;
    
    return 0;
}