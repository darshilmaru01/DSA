//Program to find sum of natural numbers till n.

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int sum=0;
    
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"SUM: "<<sum<<endl;
    return 0;
}