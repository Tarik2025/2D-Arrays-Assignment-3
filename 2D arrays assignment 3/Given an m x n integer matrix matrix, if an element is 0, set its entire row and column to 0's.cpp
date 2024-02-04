#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the no of Rows and Columns respectively:"<<endl;
    cin>>n>>m;
    int a[n][m];
    cout<<"Enter elements in the array:"<<endl;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
    }
    cout<<"The elements in the array:"<<endl;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
    }
    int copy[n][m];
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    { 
        copy[i][j]=a[i][j];
    }
    }
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    { 
      if(copy[i][j]==0)
      {
        for(int c=0;c<n;c++)
        {
            a[i][c]=0;
        }
        for(int r=0;r<m;r++)
        {
            a[r][j]=0;
        }
      }
      
      
    } 
    }
    
  
    cout<<"The elements in the array:"<<endl;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
    }
}

