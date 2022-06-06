// Is vowel or consonant
#include <iostream>
using namespace std;

int main(){

    char c;
    cout<<"Enter char: ";
    cin >>c;
    
    switch(c)
    {
    case 'a':
        cout<<"Vowel"<<endl;
        break;

    case 'e':
        cout<<"Vowel"<<endl;
        break;

    case 'i':
        cout<<"Vowel"<<endl; 
        break;

    case 'o':
        cout<<"Vowel"<<endl;
        break;

    
    case 'u':
        cout<<"Vowel"<<endl;
        break;

    default:
        cout<<"Consonant";
        break;
    }
return 0;
}