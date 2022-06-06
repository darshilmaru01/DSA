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


    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (a[j]<a[i]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    cout<<"Array after sorting"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}    