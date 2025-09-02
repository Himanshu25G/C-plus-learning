#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter number :  ";
cin>>n;
cout<<"even number from 2 to n  :  ";
//     for(int i=1; i<=n; i++)
//   {    if(i%2==0)
//         cout<<i<<endl;

//   }

for(int i=2; i<=n;i=i+2)
cout<<i<<" ";

}