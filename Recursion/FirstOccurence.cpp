//Find first and last occurence position of number

#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int i, int key){

    if(i==n){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1, key);
}

int lastocc(int arr[], int n, int i, int key){

    
    if(i==n){
        return -1;
    }

    int restArr=lastocc(arr, n,i+1, key);
     
    if(restArr!=-1){
        return restArr;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main(){
    
    int arr[]={1,1,3,4,5,2,4,2};
    cout<<firstocc(arr,8,0,2)<<endl;
    cout<<lastocc(arr,8,0,2)<<endl;
    return 0;
}