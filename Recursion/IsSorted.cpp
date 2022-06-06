#include<iostream>
using namespace std;

bool sorted(int a[], int size){
    
    if(size==1){
        return true;
    }
    bool restArr = sorted(a+1, size-1);
    if(a[0]<a[1] && restArr){
        return true;
    }
}

int main(){

    int a[] = {1,2,4,5,6};
    cout<<sorted(a, 5)<<endl;
    return 0;
}