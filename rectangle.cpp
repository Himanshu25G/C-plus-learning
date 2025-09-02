#include<iostream>
using namespace std;
int main(){
int n,m;


cout<<"enter the rows: ";
cin>>n;
cout<<"enter the cols : ";
cin>>m;

for( int i=1;i<=n;i++)     //its for rows
{
    for( int j=1;j<=m;j++)              //its for the columns
       { cout<<" * " ;}
       cout<<endl;
}


}