#include <iostream>
using namespace std;

int main(){

    int a,b,c;

    cout << "Enter value of a,b,c\n";
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout << "A is max";
        }
        else
            cout << "C is max";
    }

    else if(b>c){
        cout << "B is max";
    }
    else 
        cout << "C is max";
    
    return 0;

}