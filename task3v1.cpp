#include<iostream>
using namespacc std;
int main()
{ int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 cout<<"Original Matrix\n";
  for(int i=0;i<3;i++)
  { for(int j=0;j<3;j++)
       cout<<a[i][j]<<"";
   cout<<endl;}
  cout<<"\nReversed Matrix\n";
  for(int i=2;i>=0;i--)
  { for(int j=2;j>=0;j--)
     cout<<a[i][j]<<" ";
    cout<<endl;
    return 0;
  }
