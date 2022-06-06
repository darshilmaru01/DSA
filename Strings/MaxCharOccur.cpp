#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s="abcaauhi";

    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }

    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }

    char ans='a';
    int max_freq = 0;

    for(int i=0;i<26;i++){
        if(freq[i]>max_freq){
            max_freq = freq[i];
            ans=i+'a';
        }
    }

    cout<<max_freq<<" "<<ans<<endl;

    return 0;
}
