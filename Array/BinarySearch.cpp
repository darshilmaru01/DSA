#include <iostream>
using namespace std;


int binarySearch(int a[], int n, int key){
    int s=1;
    int e=n;

    while(s<=e){
        int mid=(s+e)/2;

        if(a[mid]==key){
            return mid;
        }

        else if(a[mid]>key){
            e=mid-1;
        }
        else{   
            s=mid+1;
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

    cout<<binarySearch(a, n,key)<<endl;

    return 0;
}