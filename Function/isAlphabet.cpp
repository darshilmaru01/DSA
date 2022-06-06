#include<iostream>
using namespace std;


isAlphabet(char n){
    if ((n>='a'&& n<='z') || (n>='A' && n<='Z')){
        cout<<"Is Alphabet";
    }
    else {
        cout<<"Is not Alphabet";
    }
    return 0;
}

int main(){

    char n;
    cin>> n;

    isAlphabet(n);
    return 0;
}