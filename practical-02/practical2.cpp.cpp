#include<iostream>
using namespace std;

int main(){
 int n=7,i,c=0;
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
   { 
      c++;
   }
 }
  if(c==2)
   {
   cout<<"N is a Prime Number"<<endl;
   }
  else
   {
  cout<<"N is not a Prime number"<<endl;
   }
 return 0;
}
