//Program to print prime numbers btwn given range 

#include <iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Give range: ";
    cin >>a>>b;

    cout<<"Prime numbers between range: ";
    for(int num=a;num<b;num++){
        int i;

        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }

    if (i==num){
        cout<<i<<"\n";
    }
    }
return 0;
}