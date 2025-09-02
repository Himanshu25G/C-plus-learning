#include<iostream>
using namespace std;

//to calculate parmutations

int factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    int permutations = factorial(n);
    cout<<"The number of permutations is: "<<permutations<<endl;
    
    return 0;
}

//Time complexity: O(n) as we are calculating factorial of n for each permutation.
