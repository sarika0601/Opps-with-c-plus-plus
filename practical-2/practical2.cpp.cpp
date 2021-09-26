#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter the number(between 1-1000):";
 cin>>n;
 if(n<2)
  cout<<n<<"N is not a primr number";
 else if(n==2)
   cout<<n<<"is a prime number\n";
  else{
     for(int i=2;i<=(n/2);i++)
             if(n%i==0)
                { cout<<n<<"is not a prime number"<<endl;
                  return 0;}
      cout<<n<<"is a prime number\n";
       }
   return 0;
}
