#include <iostream>
using namespace std;

int linearSearch(int a[], int n, int key){           //Function of linear search
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}


int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int key;
    cout<<"Enter value to be find: "; 
    cin>>key;

    cout<<linearSearch(a,n,key);

    return 0;
}    