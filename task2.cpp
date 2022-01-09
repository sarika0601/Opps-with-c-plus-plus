#include<iostream>
#include<ctime>
using namespace std;
int main()
{
int c;
time_tt=time(0);
tm *w=localtime(&t);
cout<<"1.Year\n2.Month\n3.Day\nEnter your choice";
cin>>c;
switch(c)
{
 case 1:cout<<"Currebt Year:"<<1900+w->tm_year<<endl;break;
 case 2: cout<<"Current Month :"<<1+w->tm_mon<<enld:break;
 case 3: cout<<"Current Day;"<<w->tm_mday<<endl;break;
 default:cout<<"Not Applicable\n";
}
return 0;
}

