#include<iostream>
using namespace std;
int main(){
int n,m;


 cout<<"enter the rows: ";
 cin>>n;









for( int i=1;i<=n;i++) 
{
    for( int j=1;j<=i;j++)   
     { cout<<j<<" ";}            
     cout<<endl;
}













 for( int i=1;i<=n;i++) 
{
     for( int j=1;j<=i;j++)   
      { if(i%2!=0)
        { cout<<j<<" ";}            
    
    else 
    cout<<(char)( j+64)<<" ";
      }
    cout<<endl;
 }














//odd number

for( int i=1;i<=n;i++) 
 {
     for( int j=1;j<=i;j++)   
      { cout<<2*j-1<<" ";}            
      cout<<endl;
 }



for( int i=1;i<=n;i++) 
 {   int a=1; 
     for( int j=1;j<=i;j++)   
      {cout<<a<<" "; 
      a=a+2;  
       }
      cout<<endl;
 }














//continues no
 int a=1; 
for( int i=1;i<=n;i++) 
 {  
     for( int j=1;j<=i;j++)   
      {cout<<a<<"  "; 
      a=a+1;  
       }
      cout<<endl;
 }




}