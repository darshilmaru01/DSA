#include<iostream>
using namespace std;


isEligible(int age){

    if(age>=18){
        cout<<"You are eligible for voting"<<endl;
    }
    else{
        cout<<"You are not eligible for voting"<<endl;
    }
    return 0;
}

int main(){

    int age;
    cin>>age;

    isEligible(age);

    return 0;
}