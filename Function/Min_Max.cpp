//Min and Max of 3 numbers

#include<iostream>
using namespace std;


isMax(int a,int b, int c){
    if(a>b){
        if(a>c){
            cout << "A is max"<<endl;
        }
        else
            cout << "C is max"<<endl;
    }

    else if(b>c){
        cout << "B is max"<<endl;
    }
    else 
        cout << "C is max"<<endl;
    
}

isMin(int a,int b, int c){
    if(a<b){
        if(a<c){
            cout << "A is min"<<endl;
        }
        else
            cout << "C is min"<<endl;
    }

    else if(b<c){
        cout << "B is min"<<endl;
    }
    else 
        cout << "C is min"<<endl;
    
}



int main(){
    
    int a,b,c;
    cin>>a>>b>>c;

    isMin(a,b,c);
    isMax(a,b,c);

    return 0;
}