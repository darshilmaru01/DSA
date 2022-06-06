// Simple calc using switch case

#include <iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter 2 Numbers: ";
    cin >> a>> b;

    char op;
    cout<<"Enter operand: ";
    cin>>op;
    
    switch(op)
    {
    case '+':
        cout<<a+b<<endl;
        break;

    case '-':
        cout<<a-b<<endl;
        break;

    case '*':
        cout<<a*b<<endl;
        break;

    case '/':
        cout<<a/b<<endl;
        break;
        
    default:
        cout<<"Invalid Operator!!!";
        break;
    }
return 0;
}