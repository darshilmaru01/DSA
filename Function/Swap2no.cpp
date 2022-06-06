#include <iostream>
using namespace std;

swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;

    cout<<a<<"\n"<<b;
}

int main(){

    int a,b;
    cin>>a>>b;

    swap(a,b);
    return 0;
}