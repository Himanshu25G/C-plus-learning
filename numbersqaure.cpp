#include<iostream>
using namespace std;
int main(){
int n,m;


 cout<<"enter the rows: ";
 cin>>n;



  


// for( int i=1;i<=n;i++)     //its for rows
// {
//     for( int j=1;j<=n;j++)       //its for the columns
//        { cout<<j<<" ";}
//        cout<<endl;
// }







//   for( int i=1;i<=n;i++) 
// {
//     for( int j=1;j<=n;j++)   
//      { cout<<i<<" ";}
//      cout<<endl;
// }





//   alphabetsqare   

for( int i=1;i<=n;i++) 
{
    for( int j=1;j<=n;j++)   
     { cout<<(char)(j+64)<<" ";}            // ascll value of A is 65 and a is 97
     cout<<endl;
}





}