//To find factors of given number

#include<iostream>
using namespace std;

int main(){

    int n,temp=1;
    cin>>n;

    cout<<"The factors are: "<<endl;

    while(temp<=n){
        if(not (n%temp))
        cout<<temp<<" ";

        temp++;
    }
    cout<<endl;
return 0;
}