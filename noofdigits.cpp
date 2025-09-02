#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter number :  ";
cin>>n;



// cout<<"the no of digit is : ";
// int count=0 ;    
//   while(n!=0)      
//   { n= n/10;
//     count++ ;
   
//   } cout<<count;





//  cout<<"the sum of digit is : ";

//  int sum;
//  sum=0;
//  while(n!=0)

// {
//   int id =n%10;          //too find last digit
//   n=n/10;
//   sum=(sum+id); 
// }
// cout<<sum;



// cout<<"the product of digit is : ";

//  int product;
//  product=1;
//  while(n!=0)
// {
//   int id =n%10;
//   n=n/10;
//   product=(product*id); 
// }
// cout<<product;




cout<<"the reverse of digit is : ";

 int rev;
 rev=0;
 while(n!=0)
{
  int id =n%10;
  rev=rev*10;
  rev=rev+id;
  n=n/10;
  
}
cout<<rev;



  }