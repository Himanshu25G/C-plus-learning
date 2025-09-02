#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter number :  ";
cin>>n;
bool flag=true;
for(int i=2; i<=n/2; i++)
{    if(n%i==0)
{       flag=false;
         break;    // to get out off loop break is used 
    }
  }
  if(flag==false)
   cout<<"prime number";
   else
   cout<<"composite number";
}