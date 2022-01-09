#include<iostream>
using namespace std;
int main()
{
int c;
cout<<"1.Year\n2.Month\n3.Day\n";
cout<<"enter your choice:";
cin>>c;
switch(c)
{
 case 1:cout<<"current year :2021\n";break;
 case 2:cout<<"Current Month:October\n";break;
 case 3:cout<<"Current Day :wednesday\n";break;
 default : cout<<"Not Applicable\n";
}
return 0;
}
