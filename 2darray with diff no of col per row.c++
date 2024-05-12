#include <iostream>
using namespace std;

int main() 
{
    int row,col,i,j;
    cout<<"enter row\n";
    cin>>row;
    
    int **arr= new int *[row];
    int *colsize= new int [row];
    for(i=0;i<row;i++)
    {
        cout<<"enter col of "<<(i+1)<<"th row\n";
        cin>>col;
        colsize[i]=col;
        arr[i]= new int[col];
    }
    
    for(i=0;i<row;i++)
    {
        cout<<"enter the "<<(i+1)<<"th row\n";
        for(j=0;j<colsize[i];j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<colsize[i];j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    for(i=0;i<row;i++)
    {
        delete [] arr[i];
    }
    delete []arr;
    delete []colsize;
    return 0;
}