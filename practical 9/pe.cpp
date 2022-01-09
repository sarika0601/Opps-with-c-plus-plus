#include<iostream>
#include<string>
using namespace std;

int main(){
string s;
cout<<"enter the string";
getline(cin,s);
string::reverse_iterator i=s.rbegin();
if(equal(s.begin(),s.end(),i))
  cout<<"yes";
else
  cout<<"no";}
