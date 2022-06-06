//Odd even using function

#include<iostream>
using namespace std;


int OddEven(int n){
    if(n%2==0){
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
}

int main(){

    int n;
    cin>>n;

    OddEven(n);
    return 0;
}