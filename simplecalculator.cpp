#include<iostream>
using namespace std;
int main()
{
float a,b;
char opr;
cout<<"enetr the a no:";
cin>>a;

cout<<"enetr the opr:";
cin>>opr;
cout<<"enetr the b no:";
cin>>b;
if(opr=='+') cout<<a+b;
else if(opr=='-') cout<<a-b;
else if(opr=='*') cout<<a*b;
else if(opr=='/') cout<<a/b;
else cout<<"invalid operation";
}