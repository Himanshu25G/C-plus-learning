#include<iostream>
using namespace std;
int main()
{
int sp,cp;
cout<<"enetr the sp:";
cin>>sp;
cout<<"enetr the cp:";
cin>>cp;
if(sp>cp)   
{
cout<<"he has profit : "<<sp-cp;}

else if(cp>sp)            //if(cp>sp)
{
cout<<"farmer has loss: "<<cp-sp;
}
else                     //if(sp==cp)
cout<<"no loss no profit";


}