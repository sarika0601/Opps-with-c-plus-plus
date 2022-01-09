#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string s="covid",c="increase";
cout<<"using reverse operation\n";
reverse(s.begin(),s.end());

cout<<s<<endl;
cout<<"using reverse iterator\n";
string::reverse_iterator i=c.rbegin();

for(;i!=c.begin();i++)
{cout<<i*;
}
}
