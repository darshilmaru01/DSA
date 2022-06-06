#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter element: "; 
        cin>>a[i];
    }

    int current=0;
    cout<<"Sum of subsequences: "<<endl;
    for(int i=0;i<n;i++){
        current=0;
        for(int j=i;j<n;j++){
            current+=a[j];
            cout << a[j] << endl; 
        }
    }

    return 0;
}    