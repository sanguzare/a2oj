#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s, final=""; 
    cin >> s;
    for (int i=0; i<s.length(); i++){
        if(s[i]=='.'){
            final+='0';
        }
        else if(s[i]=='-' && s[i+1]=='-' && i<(s.length()-1)){
            final+='2';
            i++;
        }
        else if(s[i]='-' && s[i+1]=='.' && i<(s.length()-1)){
            final+='1';
            i++;
        }
    }
    cout << final << endl;
}