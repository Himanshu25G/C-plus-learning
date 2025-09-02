#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter number :  ";
cin>>n;
cout<<"the table of "<<n<<" is : ";
for(int i=n; i<=10*n; i=i+n)
cout<<i<<" ";

}