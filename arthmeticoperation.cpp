#include<iostream>
using namespace std;
int main(){
    int x,y;
    

    cout<<"enter the no x: ";
    cin>>x;  //cin is used to take input from the user
    
    cout<<"enter the no y: ";
    cin>>y;
    cout<<x%y<<endl;    // give the reminder its modulus operator
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl; 


    //note:    a%b== a  (if a<b)
    //        a%a== 0
      //      a%(-b) ==a%b
      //      (-a)%b==  -[a%b]
    }