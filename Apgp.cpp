#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter number :  ";
cin>>n;
//print AP 4 7 10 13  .......   n
//           int a=4;                    An= a + (n-1)d  ; a=first term ;nth term 
//           for(int i=4;i<=n;i++)              d = common difference
//            {cout<<a<<" ";
//  a= a+3;}
cout<<"the AP till nth term is : " ;
 for(int i=4; i<=3*n-1 ; i=i+3)
  cout<<i<<" ";
}