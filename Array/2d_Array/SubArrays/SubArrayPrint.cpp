
#include <iostream>
#include <climits>
using namespace std;


int main(){
    
    int n;
    cin>>n;

    int a[n]; 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }   

   for (int i=0; i <n; i++)
    {
        //ending point
        for (int j=i; j<n; j++)
        {
            //Printing elements between the start and end points
            cout<<"[";
            for (int k=i; k<=j; k++)
            {
                cout<<a[k]<<" ";
            }
          cout<<"]"<<endl;
        }
    }

   return 0;
}    