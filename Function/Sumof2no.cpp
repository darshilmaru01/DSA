//Sum of 2 no's using function

#include<iostream>
using namespace std;

int add(int num1,int num2){               //Function 
    int sum= num1+num2;
    return sum;
}

int main(){

    int num1;
    int num2;

    cout<<"Enter Numbers: ";
    cin>>num1>>num2;

    cout<<add(num1,num2)<<endl;
    return 0;
}