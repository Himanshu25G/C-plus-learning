#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"enter number :  ";
cin>>n;

int product=1;
cout<<"the factorial of given no is :  ";

for(int i=1; i<=n; i++)
 { product*=i;
 }
 
 cout<<product<<endl;
}