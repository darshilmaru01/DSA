
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }

    cout<<"Sum of array: "<<sum;

    return 0;
}    