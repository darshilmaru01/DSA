#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){

    int a=2;
    int b=4;

    cout<<"Value before swap: "<<a<<" "<<b<<endl;
    swap(&a,&b);

    cout<<"Value after swap: "<<a<<" "<<b<<endl;

    return 0;
}