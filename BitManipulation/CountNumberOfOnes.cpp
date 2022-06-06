#include <iostream>
using namespace std;

int NumOfOne(int n){
    
    int count =0;
    while(n){
        n= n&(n-1);
        count++;
    }
    return count;
}

int main(){
    cout<<NumOfOne(1)<<endl;
    return 0;
}