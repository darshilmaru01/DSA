
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

    a[n]=-1;
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    int ans=0;
    int mx=-1;

    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1])
            ans++;
        mx = max(mx,a[i]);
    }

    cout<<ans<<endl;

    return 0;
}    